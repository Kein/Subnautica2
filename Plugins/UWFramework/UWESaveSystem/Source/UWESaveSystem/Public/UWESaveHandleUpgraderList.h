#pragma once
#include "CoreMinimal.h"
#include "UWESaveHandleUpgraderInfo.h"
#include "UWESaveHandleUpgraderList.generated.h"

USTRUCT(BlueprintType)
struct FUWESaveHandleUpgraderList {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    TArray<FUWESaveHandleUpgraderInfo> Upgraders;
    
    UWESAVESYSTEM_API FUWESaveHandleUpgraderList();
};

