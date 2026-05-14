#pragma once
#include "CoreMinimal.h"
#include "GPPModelsPaging_NoNameEncryption.h"
#include "GPPModelsV2GetLeaderboardConfigPublicResp_NoNameEncryption.h"
#include "GPPModelsV2GetAllLeaderboardConfigsPublicResp_NoNameEncryption.generated.h"

USTRUCT()
struct GPP_API FGPPModelsV2GetAllLeaderboardConfigsPublicResp_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FGPPModelsV2GetLeaderboardConfigPublicResp_NoNameEncryption> Data;
    
    UPROPERTY()
    FGPPModelsPaging_NoNameEncryption Paging;
    
    FGPPModelsV2GetAllLeaderboardConfigsPublicResp_NoNameEncryption();
};

