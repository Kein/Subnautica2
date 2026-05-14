#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UWESubmarine.generated.h"

class APawn;
class UStaticMeshComponent;
class UUWEAISpeakerComponent;
class UUWEMechanicalSetComponent;
class UUWEMovementSetComponent;
class UUWENetworkSmoothingComponent;
class UUWEPawnAttachmentOwner;
class UUWESubmarineAlertStatusHandler;
class UUWESubmarineMovementComponent;
class UUWESubmarinePilotComponent;
class UVolumeTrackerComponent;

UCLASS()
class UWESUBMARINE_API AUWESubmarine : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPilotChanged, UUWESubmarinePilotComponent*, PilotComponent);
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UUWESubmarineAlertStatusHandler* SubmarineAlertStatusHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UStaticMeshComponent* HullMesh;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWEAISpeakerComponent* AISpeakerComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UUWESubmarineMovementComponent* SubmarineMovement;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWEMovementSetComponent* MovementSetComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWEMechanicalSetComponent* MechanicalSetComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UUWESubmarinePilotComponent* PilotComponent;
    
    UPROPERTY(BlueprintAssignable)
    FPilotChanged OnPilotChanged;
    
    UPROPERTY(Replicated)
    bool bControlled;
    
    UPROPERTY(Replicated)
    bool bControllingAllowed;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWEPawnAttachmentOwner* AttachmentOwnerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UStaticMeshComponent* MovementCollision;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UVolumeTrackerComponent* VolumeTracker;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWENetworkSmoothingComponent* NetworkSmoothingComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName PilotAttachSlot;
    
public:
    AUWESubmarine(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void Wreck();
    
private:
    UFUNCTION()
    void UpdateMaxSpeed();
    
public:
    UFUNCTION(BlueprintCallable)
    void RepairAll();
    
private:
    UFUNCTION()
    void OnEnergyRefilled(AActor* Who);
    
    UFUNCTION()
    void OnEnergyEmpty(AActor* Who);
    
public:
    UFUNCTION(NetMulticast, Reliable)
    void DetachPilot(APawn* Pilot);
    
    UFUNCTION(BlueprintCallable)
    void DefloodAll();
    
    UFUNCTION(NetMulticast, Reliable)
    void AttachPilot(APawn* Pilot);
    
};

