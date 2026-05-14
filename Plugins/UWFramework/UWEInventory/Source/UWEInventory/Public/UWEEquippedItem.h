#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UWEEquippedItem.generated.h"

class AUWEBaseItem;
class UUWEItemType;

USTRUCT(BlueprintType)
struct UWEINVENTORY_API FUWEEquippedItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    FGuid ActorUId;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    UUWEItemType* ItemType;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    FTransform Transform;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    FGuid SaveGuid;
    
    UPROPERTY(Transient)
    AUWEBaseItem* Actor;
    
    FUWEEquippedItem();
};

