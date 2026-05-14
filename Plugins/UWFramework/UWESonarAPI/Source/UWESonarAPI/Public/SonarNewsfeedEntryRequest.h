#pragma once
#include "CoreMinimal.h"
#include "SonarNewsfeedEntryRequest.generated.h"

USTRUCT(BlueprintType)
struct FSonarNewsfeedEntryRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString Locale;
    
    UPROPERTY(BlueprintReadOnly)
    FString DocumentId;
    
    UWESONARAPI_API FSonarNewsfeedEntryRequest();
};

