#pragma once
#include "CoreMinimal.h"
#include "UWEAlertStatusHandler.h"
#include "UWESubmarineAlertStatusHandler.generated.h"

class UUWESubmarineMovementComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWESUBMARINE_API UUWESubmarineAlertStatusHandler : public UUWEAlertStatusHandler {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UUWESubmarineMovementComponent* SubmarineMovement;
    
public:
    UUWESubmarineAlertStatusHandler(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnCollisionImminent(bool bNewCollisionImminent);
    
};

