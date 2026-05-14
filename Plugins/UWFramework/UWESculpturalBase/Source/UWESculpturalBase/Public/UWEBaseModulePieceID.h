#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UWEBaseModulePieceID.generated.h"

class UUWEBaseModule;

USTRUCT(BlueprintType)
struct UWESCULPTURALBASE_API FUWEBaseModulePieceID {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    UUWEBaseModule* Module;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    FIntVector Coords;
    
    FUWEBaseModulePieceID();
};
FORCEINLINE uint32 GetTypeHash(const FUWEBaseModulePieceID) { return 0; }

