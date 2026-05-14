#pragma once
#include "CoreMinimal.h"
#include "UWECharacterMovementComponentBasePhysicsInteractionSettings.generated.h"

USTRUCT(BlueprintType)
struct FUWECharacterMovementComponentBasePhysicsInteractionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InitialPushForceFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PushForceFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PushVelocityMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxVolumeToApplyPushVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ScalePushVelocityWithMaxVolume;
    
    UWEMOVEMENT_API FUWECharacterMovementComponentBasePhysicsInteractionSettings();
};

