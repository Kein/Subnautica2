#pragma once
#include "CoreMinimal.h"
#include "UWEResourceDrop.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FUWEResourceDrop {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<AActor> ResourceClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ResourcesToDrop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DropChance;
    
    UWEDYNAMICRESOURCES_API FUWEResourceDrop();
};

