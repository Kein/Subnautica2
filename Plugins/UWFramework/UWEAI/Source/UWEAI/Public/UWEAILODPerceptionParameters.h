#pragma once
#include "CoreMinimal.h"
#include "UWEAILODPerceptionParameters.generated.h"

USTRUCT()
struct UWEAI_API FUWEAILODPerceptionParameters {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool PerceptionEnabled;
    
    UPROPERTY(EditAnywhere)
    bool UnregisterSource;
    
    FUWEAILODPerceptionParameters();
};

