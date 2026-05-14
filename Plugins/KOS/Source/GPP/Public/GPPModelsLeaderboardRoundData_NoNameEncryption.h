#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GPPModelsLeaderboardRoundData_NoNameEncryption.generated.h"

USTRUCT()
struct GPP_API FGPPModelsLeaderboardRoundData_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY()
    FDateTime EndTime;
    
    UPROPERTY()
    FString LeaderboardCode;
    
    UPROPERTY()
    int32 round;
    
    UPROPERTY()
    FDateTime StartTime;
    
    UPROPERTY()
    FString Type;
    
    FGPPModelsLeaderboardRoundData_NoNameEncryption();
};

