#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameFramework/ForceFeedbackEffect.h"
#include "GameFramework/ForceFeedbackEffect.h"
#include "UWEDynamicForceFeedbackEffect.generated.h"

UCLASS(Abstract)
class UWEGAMEPLAY_API UUWEDynamicForceFeedbackEffect : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float Intensity;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, float> PerPlatformIntensity;
    
    UPROPERTY(EditAnywhere)
    TArray<FForceFeedbackChannelDetails> ChannelDetails;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, FForceFeedbackEffectOverridenChannelDetails> PerDeviceOverrides;
    
public:
    UUWEDynamicForceFeedbackEffect();

};

