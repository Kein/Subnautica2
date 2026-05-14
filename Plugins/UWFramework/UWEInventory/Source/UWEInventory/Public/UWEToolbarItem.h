#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UWEToolbarItem.generated.h"

class AActor;
class UUWEItemType;

USTRUCT(BlueprintType)
struct UWEINVENTORY_API FUWEToolbarItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    int32 SlotNumber;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    AActor* Actor;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    bool bEquipped;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    int32 StackSize;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    UUWEItemType* ItemType;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    FGuid SaveGuid;
    
    FUWEToolbarItem();
};

