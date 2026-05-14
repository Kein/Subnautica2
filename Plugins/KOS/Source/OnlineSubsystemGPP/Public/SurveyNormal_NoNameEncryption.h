#pragma once
#include "CoreMinimal.h"
#include "SurveyMessages_NoNameEncryption.h"
#include "SurveyReward_NoNameEncryption.h"
#include "SurveyNormal_NoNameEncryption.generated.h"

USTRUCT(BlueprintType)
struct ONLINESUBSYSTEMGPP_API FSurveyNormal_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FString ID;
    
    UPROPERTY(BlueprintReadWrite)
    FString URL;
    
    UPROPERTY(BlueprintReadWrite)
    FString DefaultLanguage;
    
    UPROPERTY(BlueprintReadWrite)
    TMap<FString, FSurveyMessages_NoNameEncryption> Messages;
    
    UPROPERTY(BlueprintReadWrite)
    FString StartDate;
    
    UPROPERTY(BlueprintReadWrite)
    FString EndDate;
    
    UPROPERTY(BlueprintReadWrite)
    FSurveyReward_NoNameEncryption Reward;
    
    FSurveyNormal_NoNameEncryption();
};

