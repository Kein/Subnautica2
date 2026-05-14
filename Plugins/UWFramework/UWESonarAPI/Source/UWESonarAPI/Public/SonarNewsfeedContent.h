#pragma once
#include "CoreMinimal.h"
#include "ESonarNewsfeedContentType.h"
#include "SonarNewsfeedContent.generated.h"

USTRUCT(BlueprintType)
struct FSonarNewsfeedContent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    ESonarNewsfeedContentType ContentType;
    
    UPROPERTY(BlueprintReadOnly)
    FString Content;
    
    UWESONARAPI_API FSonarNewsfeedContent();
};

