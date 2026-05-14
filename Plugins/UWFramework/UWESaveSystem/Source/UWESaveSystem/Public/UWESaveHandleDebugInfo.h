#pragma once
#include "CoreMinimal.h"
#include "UWESaveHandleDebugInfo.generated.h"

USTRUCT()
struct FUWESaveHandleDebugInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString SaveId;
    
    UPROPERTY()
    int32 NumBytes;
    
    UWESAVESYSTEM_API FUWESaveHandleDebugInfo();
};

