#pragma once
#include "CoreMinimal.h"
#include "ESonarSurveyOptionType.h"
#include "SonarSurveyQuestion.generated.h"

USTRUCT(BlueprintType)
struct FSonarSurveyQuestion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    ESonarSurveyOptionType OptionType;
    
    UPROPERTY(BlueprintReadOnly)
    FString Question;
    
    UWESONARAPI_API FSonarSurveyQuestion();
};

