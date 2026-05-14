#pragma once
#include "CoreMinimal.h"
#include "UWESaveBuffer.h"
#include "UWESaveGameCustomInfoEntry.generated.h"

USTRUCT(BlueprintType)
struct UWESAVESYSTEM_API FUWESaveGameCustomInfoEntry {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    TSoftClassPtr<UObject> ClassPath;
    
    UPROPERTY(SaveGame)
    FName ID;
    
    UPROPERTY(SaveGame)
    FUWESaveBuffer SaveBuffer;
    
    FUWESaveGameCustomInfoEntry();
};

