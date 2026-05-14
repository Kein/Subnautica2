#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UWEScanDataExtraUnlock.generated.h"

class IUWEUnlockableAsset;
class UUWEUnlockableAsset;

USTRUCT(BlueprintType)
struct FUWEScanDataExtraUnlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UUWEUnlockableAsset> AssetToUnlock;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag RequiredTagToUnlock;
    
    UWESCANNER_API FUWEScanDataExtraUnlock();
};

