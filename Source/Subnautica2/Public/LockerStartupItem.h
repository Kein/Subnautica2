#pragma once
#include "CoreMinimal.h"
#include "LockerStartupItem.generated.h"

class UUWEItemType;

USTRUCT(BlueprintType)
struct SUBNAUTICA2_API FLockerStartupItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UUWEItemType* Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Count;
    
    FLockerStartupItem();
};

