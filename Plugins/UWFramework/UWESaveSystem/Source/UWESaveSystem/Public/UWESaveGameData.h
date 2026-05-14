#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UWEPlayerMetaData.h"
#include "UWESaveBuffer.h"
#include "UWESaveRecord.h"
#include "UWESaveSlotMetaData.h"
#include "UWESaveGameData.generated.h"

USTRUCT()
struct FUWESaveGameData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FUWESaveSlotMetaData MetaData;
    
    UPROPERTY()
    int32 UserIndex;
    
    UPROPERTY()
    TMap<FGuid, FUWESaveBuffer> SaveData;
    
    UPROPERTY()
    TArray<FUWESaveRecord> Records;
    
    UPROPERTY()
    TArray<FUWEPlayerMetaData> PlayerMetaData;
    
    UWESAVESYSTEM_API FUWESaveGameData();
};

