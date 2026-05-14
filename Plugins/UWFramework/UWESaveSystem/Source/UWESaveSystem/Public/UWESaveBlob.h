#pragma once
#include "CoreMinimal.h"
#include "UWESaveBuffer.h"
#include "UWESaveBlob.generated.h"

USTRUCT(BlueprintType)
struct FUWESaveBlob {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    FUWESaveBuffer MetaData;
    
    UPROPERTY(SaveGame)
    FUWESaveBuffer GameData;
    
    UWESAVESYSTEM_API FUWESaveBlob();
};

