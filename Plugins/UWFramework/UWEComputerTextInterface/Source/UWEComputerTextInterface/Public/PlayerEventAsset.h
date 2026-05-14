#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "PlayerEventAsset.generated.h"

class UUWEPrimaryDataAssetBase;

USTRUCT(BlueprintType)
struct FPlayerEventAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag Verb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UUWEPrimaryDataAssetBase* Asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Count;
    
    UWECOMPUTERTEXTINTERFACE_API FPlayerEventAsset();
};

