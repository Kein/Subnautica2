#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UWEInventoryItemId.generated.h"

USTRUCT(BlueprintType)
struct UWEINVENTORY_API FUWEInventoryItemId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FGuid InternalId;
    
    FUWEInventoryItemId();
};
FORCEINLINE uint32 GetTypeHash(const FUWEInventoryItemId) { return 0; }

