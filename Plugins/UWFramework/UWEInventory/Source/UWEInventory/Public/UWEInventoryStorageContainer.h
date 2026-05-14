#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "UWEInventoryStorageContainer.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct UWEINVENTORY_API FUWEInventoryStorageContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    int32 InventoryId;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    FVector InventoryLocation;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    TSubclassOf<AActor> InventoryClass;
    
    UPROPERTY(BlueprintReadWrite, Transient, VisibleAnywhere)
    TWeakObjectPtr<AActor> Actor;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    int32 MaxItems;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    bool bIsCommunal;
    
    FUWEInventoryStorageContainer();
};

