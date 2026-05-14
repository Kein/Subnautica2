#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UWEBaseModulePieceID.h"
#include "UWEModuleMatch.generated.h"

USTRUCT(BlueprintType)
struct FUWEModuleMatch {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly, SaveGame)
    FUWEBaseModulePieceID PieceId;
    
private:
    UPROPERTY(EditDefaultsOnly, SaveGame)
    FRotator Rotation;
    
public:
    UWESCULPTURALBASE_API FUWEModuleMatch();
};

