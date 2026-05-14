#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SmartObjectRuntime.h"
#include "SmartObjectRequestTypes.h"
#include "UWESmartObjectData.generated.h"

USTRUCT(BlueprintType)
struct FUWESmartObjectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FSmartObjectRequestResult RequestResult;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FSmartObjectClaimHandle ClaimHandle;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FVector SlotLocation;
    
    UWEAI_API FUWESmartObjectData();
};

