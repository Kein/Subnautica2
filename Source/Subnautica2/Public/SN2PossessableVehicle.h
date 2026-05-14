#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InputActionValue.h"
#include "GameplayTagContainer.h"
#include "UWEAttachmentOwnerHost.h"
#include "SN2BaseCharacter.h"
#include "SN2InputAngleDelegateDelegate.h"
#include "SN2PossessableVehicle.generated.h"

class AActor;
class AController;
class APawn;
class APlayerState;
class UCameraComponent;
class UCommonUserWidget;
class USN2OutOfBoundsCheckComponent;
class USN2PilotVehicleComponent;
class UUWEHealthSetComponent;
class UUWEMechanicalSetComponent;
class UUWEMovementSetComponent;
class UUWEPawnAttachmentOwner;
class UVolumeTrackerComponent;

UCLASS()
class SUBNAUTICA2_API ASN2PossessableVehicle : public ASN2BaseCharacter, public IUWEAttachmentOwnerHost {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSN2PossessableVehicleOnPilotExitedCallback);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSN2PossessableVehicleOnPilotEnteredCallback, APawn*, Pilot);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnStopPilotingFailed);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FBrokenChanged);
    
    UPROPERTY(BlueprintAssignable)
    FBrokenChanged OnBrokenChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnStopPilotingFailed OnStopPilotingFailed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName PilotAttachSlot;
    
    UPROPERTY(BlueprintAssignable)
    FSN2PossessableVehicleOnPilotEnteredCallback OnPilotEnteredCallback;
    
    UPROPERTY(BlueprintAssignable)
    FSN2PossessableVehicleOnPilotExitedCallback OnPilotExitedCallback;
    
    UPROPERTY(BlueprintAssignable)
    FSN2InputAngleDelegate OnInputPitch;
    
    UPROPERTY(BlueprintAssignable)
    FSN2InputAngleDelegate OnInputYaw;
    
    UPROPERTY(BlueprintAssignable)
    FSN2InputAngleDelegate OnInputRoll;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWEPawnAttachmentOwner* AttachmentOwnerComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UCameraComponent* FirstPersonCamera;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UVolumeTrackerComponent* VolumeTracker;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWEHealthSetComponent* HealthSetComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWEMechanicalSetComponent* MechanicalSetComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWEMovementSetComponent* MovementSetComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    USN2PilotVehicleComponent* PilotVehicleInteraction;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    USN2OutOfBoundsCheckComponent* OutOfBoundsCheckComponent;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, ReplicatedUsing=OnRep_Pilot)
    APawn* Pilot;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag EnterCueTag;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag ExitCueTag;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<UCommonUserWidget> WidgetClass;
    
    UPROPERTY(BlueprintReadOnly, Instanced, Transient)
    UCommonUserWidget* CurrentWidget;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ExplodeDamage;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ExplodeRadius;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ExplodePushback;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag ExplodeCueTag;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsAttaching;
    
private:
    UPROPERTY(SaveGame, ReplicatedUsing=OnRep_Broken)
    bool bBroken;
    
public:
    ASN2PossessableVehicle(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void StopPilotWithoutInputAtRequestedLocation(const TArray<FVector>& RequestedEjectLocations);
    
    UFUNCTION(BlueprintCallable)
    void StopPilotWithoutInput();
    
    UFUNCTION(BlueprintCallable)
    void StopPilot(const FInputActionValue& InputActionValue);
    
    UFUNCTION(BlueprintCallable)
    void StartPilot(AController* InteractingController);
    
    UFUNCTION(BlueprintCallable)
    void SetIsBroken(bool bInBroken);
    
    UFUNCTION(Reliable, Server)
    void Server_InitiateDetachmentFromAttachmentOwner();
    
private:
    UFUNCTION(Reliable, Server)
    void RequestStopPiloting(const TArray<FVector>& RequestedEjectLocations);
    
    UFUNCTION()
    void OnRep_Pilot(APawn* OldPilot);
    
    UFUNCTION()
    void OnRep_Broken() const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnPilotExited_BP(APawn* PilotActor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPilotEntered_BP(APawn* PilotActor);
    
private:
    UFUNCTION()
    void OnMaxSpeedChanged();
    
    UFUNCTION()
    void OnFullyHealedVehicle(AActor* SourceActor, AActor* TargetActor);
    
protected:
    UFUNCTION()
    void OnEnergyRefilled(AActor* Who);
    
    UFUNCTION()
    void OnEnergyEmpty(AActor* Who);
    
private:
    UFUNCTION()
    void OnDiedVehicle(AActor* SourceActor, AActor* TargetActor);
    
    UFUNCTION()
    void OnDiedPlayer(AActor* SourceActor, AActor* TargetActor);
    
public:
    UFUNCTION()
    void OnDetachFinished(AActor* Attachment, const FName& SlotName);
    
    UFUNCTION()
    void OnAttachFinished(AActor* Attachment, const FName& SlotName);
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnPlayerStateChanged(APlayerState* NewPlayerState);
    
    UFUNCTION(BlueprintPure)
    bool IsPiloted() const;
    
    UFUNCTION(BlueprintPure)
    bool IsBroken() const;
    
    UFUNCTION(BlueprintPure)
    USN2PilotVehicleComponent* GetPilotVehicleInteraction() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetPilot() const;
    
    UFUNCTION(BlueprintPure)
    bool GetIsPowered() const;
    
    UFUNCTION(BlueprintCallable)
    void DetachAllExceptPilot();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DebugStopPilotingAndDestroy();
    

    // Fix for true pure virtual functions not being implemented
};

