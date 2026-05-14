#pragma once
#include "CoreMinimal.h"
#include "UWELootEntry.h"
#include "UWELootEntryList.generated.h"

USTRUCT(BlueprintType)
struct FUWELootEntryList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FUWELootEntry> LootEntries;
    
    UWEWORLDPOPULATION2_API FUWELootEntryList();
};

