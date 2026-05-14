#pragma once
#include "CoreMinimal.h"
#include "SurveyReward_NoNameEncryption.generated.h"

USTRUCT(BlueprintType)
struct ONLINESUBSYSTEMGPP_API FSurveyReward_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FString ID;
    
    UPROPERTY(BlueprintReadWrite)
    int32 Quantity;
    
    FSurveyReward_NoNameEncryption();
};

