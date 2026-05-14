#pragma once
#include "CoreMinimal.h"
#include "UWESaveGameThumbnail.generated.h"

USTRUCT(BlueprintType)
struct FUWESaveGameThumbnail {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    int32 Width;
    
    UPROPERTY(SaveGame)
    int32 Height;
    
    UPROPERTY(SaveGame)
    int32 Version;
    
    UPROPERTY(SaveGame)
    TArray<uint8> Data;
    
    UWESAVESYSTEM_API FUWESaveGameThumbnail();
};

