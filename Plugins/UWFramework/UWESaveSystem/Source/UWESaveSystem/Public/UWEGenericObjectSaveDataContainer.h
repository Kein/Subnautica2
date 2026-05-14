#pragma once
#include "CoreMinimal.h"
#include "UWEGenericObjectSaveDataEntry.h"
#include "UWEGenericObjectSaveDataContainer.generated.h"

USTRUCT(BlueprintType)
struct UWESAVESYSTEM_API FUWEGenericObjectSaveDataContainer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(SaveGame)
    TArray<FUWEGenericObjectSaveDataEntry> Data;
    
public:
    FUWEGenericObjectSaveDataContainer();
};

