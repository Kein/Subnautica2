#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UWEAIMovementCoreModule.generated.h"

UCLASS(BlueprintType, DefaultToInstanced, EditInlineNew)
class UWEAIMOVEMENT_API UUWEAIMovementCoreModule : public UObject {
    GENERATED_BODY()
public:
    UUWEAIMovementCoreModule();

    UFUNCTION(BlueprintCallable)
    void SetForceProportion(float InForceProportion);
    
    UFUNCTION(BlueprintCallable)
    void SetDragProportion(float InDragProportion);
    
    UFUNCTION(BlueprintCallable)
    void AddVelocity(const FVector& Velocity);
    
    UFUNCTION(BlueprintCallable)
    void AddImpulse(const FVector& Impulse);
    
    UFUNCTION(BlueprintCallable)
    void AddForce(const FVector& Force);
    
    UFUNCTION(BlueprintCallable)
    void AddAcceleration(const FVector& Acceleration);
    
};

