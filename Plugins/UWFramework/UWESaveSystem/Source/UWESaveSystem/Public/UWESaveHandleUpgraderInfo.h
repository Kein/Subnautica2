#pragma once
#include "CoreMinimal.h"
#include "UWESaveHandleUpgraderInfo.generated.h"

class UUWESaveHandleUpgrader;

USTRUCT(BlueprintType)
struct FUWESaveHandleUpgraderInfo {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    int32 LatestVersion;
    
    UPROPERTY(SaveGame)
    int32 MinimumSupportedVersion;
    
    UPROPERTY(SaveGame)
    TSoftClassPtr<UUWESaveHandleUpgrader> UpgraderClass;
    
    UWESAVESYSTEM_API FUWESaveHandleUpgraderInfo();
};

