#pragma once
#include "CoreMinimal.h"
#include "UWESaveSlotMetaData.h"
#include "UWELoadMetaDataSaveGameWrapper.generated.h"

USTRUCT()
struct UWESAVESYSTEM_API FUWELoadMetaDataSaveGameWrapper {
    GENERATED_BODY()
public:
    UPROPERTY()
    FUWESaveSlotMetaData MetaData;
    
    FUWELoadMetaDataSaveGameWrapper();
};

