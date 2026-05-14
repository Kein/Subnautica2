#pragma once
#include "CoreMinimal.h"
#include "AlertInstHandle.generated.h"

class USN2SubmarineAlert;

USTRUCT(BlueprintType)
struct FAlertInstHandle {
    GENERATED_BODY()
public:
    UPROPERTY()
    USN2SubmarineAlert* AlertRef;
    
    SUBNAUTICA2_API FAlertInstHandle();
};

