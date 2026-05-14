#pragma once
#include "CoreMinimal.h"
#include "SonarNewsfeedListRequest.generated.h"

USTRUCT(BlueprintType)
struct FSonarNewsfeedListRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString Locale;
    
    UPROPERTY(BlueprintReadOnly)
    FString PlatformName;
    
    UWESONARAPI_API FSonarNewsfeedListRequest();
};

