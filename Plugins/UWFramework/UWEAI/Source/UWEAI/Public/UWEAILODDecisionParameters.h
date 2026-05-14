#pragma once
#include "CoreMinimal.h"
#include "UWEAILODDecisionParameters.generated.h"

USTRUCT()
struct UWEAI_API FUWEAILODDecisionParameters {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool UtilityTickingEnabled;
    
    UPROPERTY(EditAnywhere)
    bool PauseLogic;
    
    FUWEAILODDecisionParameters();
};

