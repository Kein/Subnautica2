#pragma once
#include "CoreMinimal.h"
#include "UWESaveGameCustomInfoEntry.h"
#include "UWESaveGameCustomInfo.generated.h"

USTRUCT(BlueprintType)
struct UWESAVESYSTEM_API FUWESaveGameCustomInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(SaveGame)
    TArray<FUWESaveGameCustomInfoEntry> Data;
    
public:
    FUWESaveGameCustomInfo();
};

