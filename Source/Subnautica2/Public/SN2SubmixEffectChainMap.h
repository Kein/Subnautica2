#pragma once
#include "CoreMinimal.h"
#include "SN2SubmixEffectChainMap.generated.h"

class USoundEffectSubmixPreset;
class USoundSubmix;

USTRUCT(BlueprintType)
struct SUBNAUTICA2_API FSN2SubmixEffectChainMap {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<USoundSubmix> Submix;
    
    UPROPERTY(EditAnywhere)
    TArray<TSoftObjectPtr<USoundEffectSubmixPreset>> SubmixEffectChain;
    
    FSN2SubmixEffectChainMap();
};

