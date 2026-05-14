#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "GameplayTagContainer.h"
#include "Chaos/ChaosEngineInterface.h"
#include "UWEObjectLifeTimeCallbacks.h"
#include "UWEAttachedActor.h"
#include "UWESaveCallbacks.h"
#include "UWEWaterCurrentAffectedObject.h"
#include "ESN2PlayerPerspective.h"
#include "SN2BaseCharacterSaveData.h"
#include "SN2BaseCharacter.generated.h"

class AController;
class APawn;
class AUWEOverlapWaterCurrent;
class UAIPerceptionStimuliSourceComponent;
class UInputMappingContext;
class UUWEAbilitySystemComponent;
class UUWECollisionImpactComponent;
class UUWEPawnAttachmentOwner;
class UUWESaveComponent;
class UUWEStoryGoal;

UCLASS()
class SUBNAUTICA2_API ASN2BaseCharacter : public ACharacter, public IAbilitySystemInterface, public IUWEAttachedActor, public IUWEWaterCurrentAffectedObject, public IUWESaveCallbacks, public IUWEObjectLifeTimeCallbacks {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPossessedChanged, bool, bNewPossessed);
    
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UUWEPawnAttachmentOwner* AttachedToOwner;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UUWECollisionImpactComponent* CollisionImpactComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UAIPerceptionStimuliSourceComponent* AIPerceptionStimuliSourceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UInputMappingContext* DefaultInputMappingContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UInputMappingContext* ClassicInputMappingContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UInputMappingContext* AlternateInputMappingContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 InputMappingPriority;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWESaveComponent* SaveComponent;
    
    UPROPERTY()
    TArray<AUWEOverlapWaterCurrent*> EnteredWaterCurrents;
    
public:
    UPROPERTY(BlueprintAssignable)
    FPossessedChanged OnPossessedChanged;
    
protected:
    UPROPERTY()
    UInputMappingContext* CurrentMappingContext;
    
    UPROPERTY()
    TArray<UInputMappingContext*> AddedMappingContexts;
    
    UPROPERTY(Replicated, SaveGame)
    FSN2BaseCharacterSaveData SaveData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWEAbilitySystemComponent* UWEAbilitySystemComponent;
    
    UPROPERTY(ReplicatedUsing=OnRep_Possessed)
    bool bPossessed;
    
public:
    ASN2BaseCharacter(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void UnlockStoryGoalOnServer(UUWEStoryGoal* StoryGoal);
    
    UFUNCTION(BlueprintCallable)
    void SetInputMappingContext(UInputMappingContext* InInputMappingContext);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultInputMappingContext();
    
protected:
    UFUNCTION(Reliable, Server)
    void ServerAcknowledgeAutonomousProxyReady();
    
public:
    UFUNCTION(BlueprintCallable)
    void RemoveInputMappingContext(UInputMappingContext* InInputMappingContext);
    
protected:
    UFUNCTION()
    void OnRep_Possessed();
    
    UFUNCTION()
    void OnGlobalTagRemoved(const FGameplayTag& GameplayTag);
    
    UFUNCTION()
    void OnGlobalTagAdded(const FGameplayTag& GameplayTag);
    
private:
    UFUNCTION()
    void OnControllerChanged(APawn* Pawn, AController* OldController, AController* NewController);
    
public:
    UFUNCTION(BlueprintPure)
    FTransform GetInteractTransform();
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<EPhysicalSurface> GetFloorSurfaceType() const;
    
    UFUNCTION(BlueprintPure)
    ESN2PlayerPerspective GetCurrentPlayerPerspective() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableDefaultUseControllerRotation(bool Enable);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnGlobalTagRemoved(const FGameplayTag& GameplayTag);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnGlobalTagAdded(const FGameplayTag& GameplayTag);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddInputVector(FVector WorldDirection, bool bForceUnitVector);
    
    UFUNCTION(BlueprintCallable)
    void AddInputMappingContext(UInputMappingContext* InInputMappingContext, int32 Priority);
    

    virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override { return NULL; }

    UFUNCTION(BlueprintCallable)
    bool IsAttached() override PURE_VIRTUAL(IsAttached, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool InitiateDetachmentIfAttached(bool FastForward) override PURE_VIRTUAL(InitiateDetachmentIfAttached, return false;);
    
    UFUNCTION(BlueprintCallable)
    UUWEPawnAttachmentOwner* GetAttachedTo() override PURE_VIRTUAL(GetAttachedTo, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    TArray<AUWEOverlapWaterCurrent*> GetEnteredWaterCurrents() override PURE_VIRTUAL(GetEnteredWaterCurrents, return TArray<AUWEOverlapWaterCurrent*>(););
    
};

