#pragma once
#include "CoreMinimal.h"
#include "UWEPlayerCustomizationSet.generated.h"

class UTexture2D;
class UUWEPlayerCustomizationItemDA;
class UUWEPlayerCustomizationItemPatternSwapDA;

USTRUCT(BlueprintType)
struct UWEPLAYERCUSTOMIZATION_API FUWEPlayerCustomizationSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TArray<TSoftObjectPtr<UUWEPlayerCustomizationItemDA>> Parts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TArray<TSoftObjectPtr<UUWEPlayerCustomizationItemPatternSwapDA>> MaterialSwaps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FString CharacterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TSoftObjectPtr<UTexture2D> UIImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TSoftObjectPtr<UTexture2D> Icon;
    
    FUWEPlayerCustomizationSet();
};

