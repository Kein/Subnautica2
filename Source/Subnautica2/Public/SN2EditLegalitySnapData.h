#pragma once
#include "CoreMinimal.h"
#include "IntVectorSetKey.h"
#include "SN2EditLegalitySnapData.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FSN2EditLegalitySnapData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TMap<FIntVectorSetKey, UObject*> CachedEditActions;
    
    SUBNAUTICA2_API FSN2EditLegalitySnapData();
};

