#pragma once
#include "CoreMinimal.h"
#include "GPPModelsUserRanking_NoNameEncryption.generated.h"

USTRUCT()
struct GPP_API FGPPModelsUserRanking_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY()
    double Point;
    
    UPROPERTY()
    int32 rank;
    
    FGPPModelsUserRanking_NoNameEncryption();
};

