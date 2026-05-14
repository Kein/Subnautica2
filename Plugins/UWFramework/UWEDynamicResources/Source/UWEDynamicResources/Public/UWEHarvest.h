#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UWEResourceDrop.h"
#include "UWEHarvest.generated.h"

class UUWEGameplayAbility;

USTRUCT(BlueprintType)
struct FUWEHarvest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer TriggerEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSoftClassPtr<UUWEGameplayAbility>> AbilitiesOnHarvest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FUWEResourceDrop> ResourceDrops;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ShouldMagnetize;
    
    UWEDYNAMICRESOURCES_API FUWEHarvest();
};

