#pragma once
#include "CoreMinimal.h"
#include "MapData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FMapData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Title;
    
    UPROPERTY()
    FString Filename;
    
    UPROPERTY()
    int32 WorldMinX;
    
    UPROPERTY()
    int32 WorldMinY;
    
    UPROPERTY()
    int32 WorldMaxX;
    
    UPROPERTY()
    int32 WorldMaxY;
    
    UPROPERTY()
    UTexture2D* Texture;
    
    SUBNAUTICA2_API FMapData();
};

