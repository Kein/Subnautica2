#pragma once
#include "CoreMinimal.h"
#include "UWELockFailedReason.generated.h"

USTRUCT(BlueprintType)
struct FUWELockFailedReason {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Reason;
    
    UWELOCK_API FUWELockFailedReason();
};

