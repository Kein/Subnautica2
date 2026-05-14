#pragma once
#include "CoreMinimal.h"
#include "UWESaveBuffer.generated.h"

USTRUCT(BlueprintType)
struct UWESAVESYSTEM_API FUWESaveBuffer {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    TArray<uint8> Data;
    
    UPROPERTY(SaveGame)
    int32 DataVersion;
    
    FUWESaveBuffer();
};

