#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "AbilitySystemInterface.h"
#include "GameplayTagContainer.h"
#include "UWEAttachedActor.h"
#include "UWEAttachmentOwnerHost.h"
#include "UWEWorldPopManagedCreature.h"
#include "EUWEAIPawnOverlapMode.h"
#include "UWEAIPawn.generated.h"

class AActor;
class UAIPerceptionStimuliSourceComponent;
class UMaterialInstanceDynamic;
class UMercuna3DNavigationComponent;
class UMercunaSurfaceNavigationComponent;
class UMeshComponent;
class USceneComponent;
class UUWEAIArchetypeComponent;
class UUWEAIGroupingComponent;
class UUWEAIMovementComponent;
class UUWEAIReplicationComponent;
class UUWEAbilitySystemComponent;
class UUWEBehaviorSetComponent;
class UUWECollisionImpactComponent;
class UUWEHealthSetComponent;
class UUWEMovementSetComponent;
class UUWENetworkSmoothingComponent;
class UUWEPawnAttachmentOwner;
class UUWEPhysicalSetComponent;
class UUWESurvivalSetComponent;
class UVolumeTrackerComponent;

UCLASS()
class UWEAI_API AUWEAIPawn : public APawn, public IAbilitySystemInterface, public IUWEAttachedActor, public IUWEAttachmentOwnerHost, public IUWEWorldPopManagedCreature {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UUWEPawnAttachmentOwner* AttachedToOwner;
    
    UPROPERTY(ReplicatedUsing=OnRep_IsObstacleSensed)
    bool IsObstacleSensed;
    
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    USceneComponent* RootCollisionComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UUWEAbilitySystemComponent* UWEAbilitySystemComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UUWEAIArchetypeComponent* ArchetypeComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWEHealthSetComponent* HealthComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWESurvivalSetComponent* SurvivalComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWEMovementSetComponent* MovementSetComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWEPhysicalSetComponent* PhysicalComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWEBehaviorSetComponent* BehaviorSetComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWEAIMovementComponent* MovementComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UMercuna3DNavigationComponent* Mercuna3DNavigation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UMercunaSurfaceNavigationComponent* MercunaSurfaceNavigation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWENetworkSmoothingComponent* NetworkSmoothingComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UVolumeTrackerComponent* VolumeTrackerComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool EnableSweepTestForNetworkSmoothing;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UAIPerceptionStimuliSourceComponent* AIPerceptionStimuliSourceComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWECollisionImpactComponent* CollisionImpactComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UUWEAIGroupingComponent* GroupingComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UUWEAIReplicationComponent* ReplicationComponent;
    
protected:
    UPROPERTY(EditAnywhere)
    EUWEAIPawnOverlapMode OverlapMode_Authority;
    
    UPROPERTY(EditAnywhere)
    EUWEAIPawnOverlapMode OverlapMode_Client;
    
    UPROPERTY(Instanced)
    UMeshComponent* MeshComponent;
    
    UPROPERTY(Instanced)
    UUWEPawnAttachmentOwner* PawnAttachmentOwner;
    
private:
    UPROPERTY()
    UMaterialInstanceDynamic* DynamicMaterialInstance;
    
public:
    AUWEAIPawn(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void UpdateMaxSpeed();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetMovementStyle(FGameplayTag InMovementStyle);
    
    UFUNCTION(BlueprintCallable)
    void SetEnvironmentType(FGameplayTag EnvironmentType);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultMovementStyle();
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultEnvironmentType();
    
protected:
    UFUNCTION()
    void OnRep_IsObstacleSensed();
    
    UFUNCTION()
    void OnRangeTrackerPostUpdate();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnInfectionChanged(float Infection);
    
    UFUNCTION()
    void OnDied(AActor* SourceActor, AActor* TargetActor);
    
    UFUNCTION()
    void OnActorDetachFinished(AActor* Actor, const FName& SlotName);
    
    UFUNCTION()
    void OnActorAttachStarted(AActor* Actor, const FName& SlotName);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsRootComponentCollisionEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsMeshCollisionEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsActorCollisionEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool HasMovementStyle(FGameplayTag InMovementStyle) const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetDecisionTarget() const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTag GetCurrentMovementStyle() const;
    
    UFUNCTION(BlueprintPure)
    UUWEAbilitySystemComponent* GetASC() const;
    
    UFUNCTION(BlueprintPure)
    UUWEAIReplicationComponent* GetAIReplicationComponent() const;
    
    UFUNCTION(BlueprintPure)
    UUWEAIGroupingComponent* GetAIGroupingComponent() const;
    
    UFUNCTION(BlueprintPure)
    UUWEAIArchetypeComponent* GetAIArchetypeComponent() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableRootComponentCollision(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void EnableMeshCollision(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void EnableActorCollision(bool Enable);
    

    virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override { return NULL; }

    UFUNCTION(BlueprintCallable)
    bool IsAttached() override PURE_VIRTUAL(IsAttached, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool InitiateDetachmentIfAttached(bool FastForward) override PURE_VIRTUAL(InitiateDetachmentIfAttached, return false;);
    
    UFUNCTION(BlueprintCallable)
    UUWEPawnAttachmentOwner* GetAttachedTo() override PURE_VIRTUAL(GetAttachedTo, return NULL;);
    
};

