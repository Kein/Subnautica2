#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SonarSurveyQuestion.h"
#include "SonarSurveyResponse.generated.h"

USTRUCT(BlueprintType)
struct FSonarSurveyResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString DocumentId;
    
    UPROPERTY(BlueprintReadOnly)
    FDateTime EndDate;
    
    UPROPERTY(BlueprintReadOnly)
    FString Title;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FSonarSurveyQuestion> Questions;
    
    UWESONARAPI_API FSonarSurveyResponse();
};

