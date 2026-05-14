#pragma once
#include "CoreMinimal.h"
#include "UWERightAngleRotator.h"
#include "UWERuntimeBaseModulePieceID.h"
#include "UWERuntimeModuleMatch.generated.h"

USTRUCT(BlueprintType)
struct FUWERuntimeModuleMatch {
    GENERATED_BODY()
public:
private:
    UPROPERTY(SaveGame)
    FUWERuntimeBaseModulePieceID PieceId;
    
    UPROPERTY(SaveGame)
    FUWERightAngleRotator Rotation;
    
    UPROPERTY()
    uint32 ComputedHash;
    
public:
    UWESCULPTURALBASE_API FUWERuntimeModuleMatch();
};

FORCEINLINE uint32 GetTypeHash(const FUWERuntimeModuleMatch) { return 0; }