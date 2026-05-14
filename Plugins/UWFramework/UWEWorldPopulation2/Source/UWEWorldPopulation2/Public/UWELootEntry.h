#pragma once
#include "CoreMinimal.h"
#include "UWELootEntry.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FUWELootEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<AActor> ResourceClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Weight;
    
    UWEWORLDPOPULATION2_API FUWELootEntry();
};

