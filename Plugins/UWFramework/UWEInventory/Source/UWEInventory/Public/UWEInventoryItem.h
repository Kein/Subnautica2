#pragma once
#include "CoreMinimal.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "UWEInventoryItemAttribute.h"
#include "UWEInventoryItemId.h"
#include "UWEInventoryItem.generated.h"

class UUWEItemType;

USTRUCT(BlueprintType)
struct UWEINVENTORY_API FUWEInventoryItem : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    int32 InventoryId;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    FUWEInventoryItemId ItemId;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    UUWEItemType* ItemType;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    int32 Count;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    TArray<FUWEInventoryItemAttribute> Attributes;
    
    FUWEInventoryItem();
};

