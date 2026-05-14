#pragma once
#include "CoreMinimal.h"
#include "GPPModelsPaging_NoNameEncryption.h"
#include "GPPModelsUserPoint_NoNameEncryption.h"
#include "GPPModelsLeaderboardRankingResult_NoNameEncryption.generated.h"

USTRUCT()
struct GPP_API FGPPModelsLeaderboardRankingResult_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FGPPModelsUserPoint_NoNameEncryption> Data;
    
    UPROPERTY()
    FGPPModelsPaging_NoNameEncryption Paging;
    
    FGPPModelsLeaderboardRankingResult_NoNameEncryption();
};

