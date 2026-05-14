#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UWEDeconstructGroupKey.generated.h"

USTRUCT(BlueprintType)
struct FUWEDeconstructGroupKey {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    FGameplayTag BrushType;
    
    UPROPERTY(SaveGame)
    int32 FloorID;
    
    UPROPERTY(SaveGame)
    int32 DeconstructID;
    
    UPROPERTY(SaveGame)
    bool IsArchived;
    
    UWESCULPTURALBASE_API FUWEDeconstructGroupKey();
};
FORCEINLINE uint32 GetTypeHash(const FUWEDeconstructGroupKey) { return 0; }

