#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UWECompartmentConnector.generated.h"

class UBoxComponent;
class UUWESubmarineCompartment;

UCLASS()
class UWESUBMARINE_API AUWECompartmentConnector : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FConnectionChanged);
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UBoxComponent* Connection;
    
    UPROPERTY(BlueprintAssignable)
    FConnectionChanged OnConnectionChanged;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float WaterThroughPut;
    
    UPROPERTY(Instanced)
    TArray<UUWESubmarineCompartment*> ConnectingCompartments;
    
protected:
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_IsOpen)
    bool bIsOpen;
    
public:
    AUWECompartmentConnector(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetIsOpen(bool bInIsOpen);
    
protected:
    UFUNCTION()
    void OnRep_IsOpen();
    
};

