#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UWEEventKey.h"
#include "UWEEventTrackerTestHelper.generated.h"

UCLASS()
class UWEEVENTTRACKER_API UUWEEventTrackerTestHelper : public UObject {
    GENERATED_BODY()
public:
    UUWEEventTrackerTestHelper();

    UFUNCTION()
    void OnEvent(FUWEEventKey Key, int32 OldValue, int32 NewValue);
    
};

