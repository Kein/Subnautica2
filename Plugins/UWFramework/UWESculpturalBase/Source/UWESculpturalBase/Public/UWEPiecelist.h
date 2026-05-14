#pragma once
#include "CoreMinimal.h"
#include "UWERuntimeModuleMatch.h"
#include "UWEPiecelist.generated.h"

USTRUCT()
struct FUWEPiecelist {
    GENERATED_BODY()
public:
    UPROPERTY()
    TSet<FUWERuntimeModuleMatch> Ar;
    
    UWESCULPTURALBASE_API FUWEPiecelist();
};

