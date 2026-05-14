#pragma once
#include "CoreMinimal.h"
#include "SonarSurveyAnswer.generated.h"

USTRUCT(BlueprintType)
struct FSonarSurveyAnswer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    uint8 Index;
    
    UPROPERTY(BlueprintReadWrite)
    FString Selected;
    
    UPROPERTY(BlueprintReadWrite)
    FString Question;
    
    UWESONARAPI_API FSonarSurveyAnswer();
};

