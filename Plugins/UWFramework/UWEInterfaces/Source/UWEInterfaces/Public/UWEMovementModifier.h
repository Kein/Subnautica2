#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "UWEMovementModifier.generated.h"

UINTERFACE(Blueprintable)
class UWEINTERFACES_API UUWEMovementModifier : public UInterface {
    GENERATED_BODY()
};

class UWEINTERFACES_API IUWEMovementModifier : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector ModifyVelocity(const FVector& InVelocity, const FVector& Acceleration, EMovementMode MovementMode, float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetSwimmingFriction();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetStrafeSpeedModifier();
    
};

