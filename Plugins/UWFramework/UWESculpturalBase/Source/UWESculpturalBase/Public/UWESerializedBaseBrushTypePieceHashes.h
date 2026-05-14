#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UWESerializedBasePieceHashes.h"
#include "UWESerializedBaseBrushTypePieceHashes.generated.h"

USTRUCT(BlueprintType)
struct FUWESerializedBaseBrushTypePieceHashes {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTag BrushType;
    
    UPROPERTY(EditAnywhere)
    TArray<FUWESerializedBasePieceHashes> PieceHashes;
    
    UWESCULPTURALBASE_API FUWESerializedBaseBrushTypePieceHashes();
};

