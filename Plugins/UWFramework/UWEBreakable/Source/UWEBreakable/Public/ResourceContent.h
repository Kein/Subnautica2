#pragma once
#include "CoreMinimal.h"
#include "ResourceContent.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FResourceContent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<AActor> ResourceClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NumResourcesToDrop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DropChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SpawnImpulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAutoPickup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AutoPickupRange;
    
    UWEBREAKABLE_API FResourceContent();
};

