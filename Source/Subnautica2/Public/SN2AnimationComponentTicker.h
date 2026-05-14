#pragma once
#include "CoreMinimal.h"
#include "UWEAggregatedComponentTickerBase.h"
#include "SN2AnimationComponentTicker.generated.h"

class USN2AnimationComponent;

UCLASS()
class SUBNAUTICA2_API ASN2AnimationComponentTicker : public AUWEAggregatedComponentTickerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export)
    TSet<USN2AnimationComponent*> Components;
    
public:
    ASN2AnimationComponentTicker(const FObjectInitializer& ObjectInitializer);

};

