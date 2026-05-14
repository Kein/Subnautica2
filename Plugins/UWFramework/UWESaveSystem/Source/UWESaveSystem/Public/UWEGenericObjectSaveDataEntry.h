#pragma once
#include "CoreMinimal.h"
#include "UWESaveBuffer.h"
#include "UWEGenericObjectSaveDataEntry.generated.h"

USTRUCT()
struct UWESAVESYSTEM_API FUWEGenericObjectSaveDataEntry {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    TSoftClassPtr<UObject> ClassPath;
    
protected:
    UPROPERTY(SaveGame)
    FUWESaveBuffer SaveBuffer;
    
public:
    FUWEGenericObjectSaveDataEntry();
};

