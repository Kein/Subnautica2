#pragma once
#include "CoreMinimal.h"
#include "EGPPLeaderboardState_NoNameEncryption.h"
#include "GPPModelsV2GetLeaderboardConfigPublicResp_NoNameEncryption.generated.h"

USTRUCT()
struct GPP_API FGPPModelsV2GetLeaderboardConfigPublicResp_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString iconURL;
    
    UPROPERTY()
    FString LeaderboardCode;
    
    UPROPERTY()
    FString Name;
    
    UPROPERTY()
    EGPPLeaderboardState_NoNameEncryption State;
    
    UPROPERTY()
    FString statCode;
    
    FGPPModelsV2GetLeaderboardConfigPublicResp_NoNameEncryption();
};

