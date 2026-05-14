#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "Engine/NetSerialization.h"
#include "UWEAimTransform.generated.h"

USTRUCT(BlueprintType)
struct UWEABILITYTASK_API FUWEAimTransform {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FVector_NetQuantize Location;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FVector_NetQuantizeNormal Rotation;
    
    FUWEAimTransform();
};

