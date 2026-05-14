#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AbilitySystemInterface.h"
#include "GameplayTagContainer.h"
#include "UWECharacterMovementBase.h"
#include "UWEAttachmentOwnerHost.h"
#include "UWESubmarine.h"
#include "AlertInstHandle.h"
#include "SN2Trident.generated.h"

class AActor;
class ACharacter;
class ASN2PossessableVehicle;
class UFMODAudioComponent;
class UInputMappingContext;
class USN2SubmarineAlert;
class USN2SubmarineAlertManager;
class USN2SubmarineDamageComponent;
class USN2SubmarineFloodManager;
class USceneComponent;
class USpotLightComponent;
class UUWEAbilitySystemComponent;
class UUWECollisionImpactComponent;

UCLASS()
class SUBNAUTICA2_API ASN2Trident : public AUWESubmarine, public IUWEAttachmentOwnerHost, public IUWECharacterMovementBase, public IAbilitySystemInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerExited, ACharacter*, Player);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerEntered, ACharacter*, Player);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnForceMisalignSensor);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFloodingChanged, bool, Flooding);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFloodedChanged, bool, Flooded);
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    USN2SubmarineDamageComponent* SubmarineDamageComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USN2SubmarineFloodManager* FloodManager;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USN2SubmarineAlertManager* AlertManager;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UFMODAudioComponent* AmbienceSound;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UFMODAudioComponent* EngineSound;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName AccelerationParamName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName VelocityParamName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName RotVelocityParamName;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerEntered OnPlayerEntered;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerExited OnPlayerExited;
    
    UPROPERTY(BlueprintAssignable)
    FOnFloodedChanged OnFloodedStatusChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnFloodingChanged OnFloodingStatusChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnForceMisalignSensor OnForceMisalignSensor;
    
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UUWECollisionImpactComponent* CollisionImpactComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UInputMappingContext* InputMappingContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 InputMappingPriority;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWEAbilitySystemComponent* UWEAbilitySystemComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    USpotLightComponent* FrontalLight;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, ReplicatedUsing=OnRep_FrontalLightActive)
    bool bFrontalLightActive;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    USceneComponent* WreckDamagePoints;
    
private:
    UPROPERTY(EditAnywhere)
    TSet<FName> DockingBaySlotsToTriggerDockerAlert;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<USN2SubmarineAlert> VehicleDockedAlert;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<USN2SubmarineAlert> VehicleUnDockedAlert;
    
    UPROPERTY()
    bool bPiloting;
    
    UPROPERTY()
    TArray<TWeakObjectPtr<ACharacter>> Players;
    
    UPROPERTY(VisibleAnywhere, ReplicatedUsing=OnRep_NumPlayersOnBoard)
    int32 NumPlayersOnBoard;
    
public:
    ASN2Trident(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    bool TryDock(ASN2PossessableVehicle* Vehicle);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAlert(UPARAM(Ref) FAlertInstHandle& InstHandle);
    
    UFUNCTION(BlueprintCallable)
    FAlertInstHandle PlayAlert(USN2SubmarineAlert* Alert, bool IgnorePreexistingCooldown);
    
private:
    UFUNCTION()
    void OnRep_NumPlayersOnBoard();
    
    UFUNCTION()
    void OnRep_FrontalLightActive();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnNumPlayersChanged(int32 NumPlayers);
    
    UFUNCTION()
    void OnMisalignSensor(FGameplayTag GameplayTag, int32 TagCount);
    
    UFUNCTION()
    void OnDealLeviathanBite(FGameplayTag GameplayTag, int32 TagCount);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDealDamageMed(FGameplayTag GameplayTag, int32 TagCount);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDealDamageLow(FGameplayTag GameplayTag, int32 TagCount);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnCollisionImminent();
    
private:
    UFUNCTION()
    void OnAttachmentPawnDetached(AActor* Pawn, const FName& SlotName);
    
    UFUNCTION()
    void OnAttachmentPawnAttached(AActor* Pawn, const FName& SlotName);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsSubsystemActive(const FGameplayTag& SubsystemTag) const;
    
    UFUNCTION(BlueprintPure)
    bool IsPointInterior(const FVector& Location) const;
    
    UFUNCTION(BlueprintPure)
    bool IsInVoid() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<ACharacter*> GetOnboardPlayers();
    
    UFUNCTION(BlueprintPure)
    int32 GetNumPlayers();
    
    UFUNCTION(BlueprintPure)
    float GetEnergyPercentage() const;
    

    virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override { return NULL; }
};

