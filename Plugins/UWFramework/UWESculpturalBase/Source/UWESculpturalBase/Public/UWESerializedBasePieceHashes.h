#pragma once
#include "CoreMinimal.h"
#include "UWERuntimeModuleMatch.h"
#include "UWESerializedBasePieceHashes.generated.h"

USTRUCT()
struct FUWESerializedBasePieceHashes {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 Hash;
    
    UPROPERTY(EditAnywhere)
    TArray<FUWERuntimeModuleMatch> Matches;
    
    UWESCULPTURALBASE_API FUWESerializedBasePieceHashes();
};

