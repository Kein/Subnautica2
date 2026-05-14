#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "UWESubmarinePilotComponent.generated.h"

class AUWESubmarine;
class UUWESubmarineMovementComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWESUBMARINE_API UUWESubmarinePilotComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UUWESubmarineMovementComponent* SubmarineMovement;
    
private:
    UPROPERTY(VisibleAnywhere, ReplicatedUsing=OnRep_Submarine)
    AUWESubmarine* Submarine;
    
public:
    UUWESubmarinePilotComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(Reliable, Server)
    void SubmitControl(int8 InYawControl, FVector InDirectionControl);
    
public:
    UFUNCTION(Reliable, Server)
    void RequestStopPiloting(const TArray<FVector>& RequestedEjectLocations);
    
    UFUNCTION(Reliable, Server)
    void RequestartPiloting(AUWESubmarine* InSubmarine);
    
private:
    UFUNCTION()
    void OnRep_Submarine(AUWESubmarine* OldSubmarine);
    
public:
    UFUNCTION(BlueprintPure)
    AUWESubmarine* GetSubmarine() const;
    
};

