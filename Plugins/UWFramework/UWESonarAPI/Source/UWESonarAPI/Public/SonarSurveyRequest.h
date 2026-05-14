#pragma once
#include "CoreMinimal.h"
#include "SonarSurveyRequest.generated.h"

USTRUCT(BlueprintType)
struct FSonarSurveyRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString Locale;
    
    UPROPERTY(BlueprintReadOnly)
    FString PlatformName;
    
    UWESONARAPI_API FSonarSurveyRequest();
};

