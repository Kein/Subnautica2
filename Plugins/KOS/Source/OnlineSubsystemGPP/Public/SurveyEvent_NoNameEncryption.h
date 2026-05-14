#pragma once
#include "CoreMinimal.h"
#include "SurveyReward_NoNameEncryption.h"
#include "SurveyEvent_NoNameEncryption.generated.h"

USTRUCT(BlueprintType)
struct ONLINESUBSYSTEMGPP_API FSurveyEvent_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FString Title;
    
    UPROPERTY(BlueprintReadWrite)
    FSurveyReward_NoNameEncryption Reward;
    
    UPROPERTY(BlueprintReadWrite)
    FString URL;
    
    UPROPERTY(BlueprintReadWrite)
    bool Active;
    
    FSurveyEvent_NoNameEncryption();
};

