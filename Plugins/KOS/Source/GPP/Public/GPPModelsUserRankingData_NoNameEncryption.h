#pragma once
#include "CoreMinimal.h"
#include "GPPModelsUserRanking_NoNameEncryption.h"
#include "GPPModelsUserRankingData_NoNameEncryption.generated.h"

USTRUCT()
struct GPP_API FGPPModelsUserRankingData_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGPPModelsUserRanking_NoNameEncryption rank;
    
    UPROPERTY()
    FString UserId;
    
    FGPPModelsUserRankingData_NoNameEncryption();
};

