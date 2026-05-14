#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UWERuntimeBaseModulePieceID.generated.h"

class UUWEBaseModule;

USTRUCT(BlueprintType)
struct UWESCULPTURALBASE_API FUWERuntimeBaseModulePieceID {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, SaveGame)
    UUWEBaseModule* Module;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    FIntVector Coords;
    
    UPROPERTY()
    uint32 ComputedHash;
    
public:
    FUWERuntimeBaseModulePieceID();
};
FORCEINLINE uint32 GetTypeHash(const FUWERuntimeBaseModulePieceID) { return 0; }

