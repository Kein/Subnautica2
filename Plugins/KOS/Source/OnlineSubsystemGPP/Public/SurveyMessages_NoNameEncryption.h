#pragma once
#include "CoreMinimal.h"
#include "SurveyMessages_NoNameEncryption.generated.h"

USTRUCT(BlueprintType)
struct ONLINESUBSYSTEMGPP_API FSurveyMessages_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FString Title;
    
    UPROPERTY(BlueprintReadWrite)
    FString Description;
    
    FSurveyMessages_NoNameEncryption();
};

