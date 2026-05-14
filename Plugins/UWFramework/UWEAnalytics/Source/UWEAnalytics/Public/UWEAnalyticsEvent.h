#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "KeyVal.h"
#include "UWEAnalyticsEvent.generated.h"

USTRUCT(BlueprintType)
struct FUWEAnalyticsEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FDateTime Timestamp;
    
    UPROPERTY(BlueprintReadWrite)
    FString EventName;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FKeyVal> GlobalAttributes;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FKeyVal> PlayerAttributes;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FKeyVal> Attributes;
    
    UWEANALYTICS_API FUWEAnalyticsEvent();
};

