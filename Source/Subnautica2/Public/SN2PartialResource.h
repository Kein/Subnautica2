#pragma once
#include "CoreMinimal.h"
#include "SN2PartialResource.generated.h"

class UUWEItemType;

USTRUCT(BlueprintType)
struct FSN2PartialResource {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    TSoftObjectPtr<UUWEItemType> ItemType;
    
    UPROPERTY(SaveGame)
    float Amount;
    
    SUBNAUTICA2_API FSN2PartialResource();
};

