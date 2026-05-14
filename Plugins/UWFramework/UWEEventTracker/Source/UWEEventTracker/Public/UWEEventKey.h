#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "UWEEventKey.generated.h"

USTRUCT(BlueprintType)
struct FUWEEventKey {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    FGameplayTag Verb;
    
    UPROPERTY(SaveGame)
    FGameplayTag Tag;
    
    UPROPERTY(SaveGame)
    FPrimaryAssetId AssetId;
    
    UWEEVENTTRACKER_API FUWEEventKey();
};
FORCEINLINE uint32 GetTypeHash(const FUWEEventKey) { return 0; }

