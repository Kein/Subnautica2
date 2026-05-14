#pragma once
#include "CoreMinimal.h"
#include "UWEAggregatedComponentTickerBase.h"
#include "UWESkeletalMeshComponentTicker.generated.h"

class UUWESkeletalMeshComponentManaged;

UCLASS()
class UWESKELETALMESHSCALABILITY_API AUWESkeletalMeshComponentTicker : public AUWEAggregatedComponentTickerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export)
    TSet<UUWESkeletalMeshComponentManaged*> Components;
    
public:
    AUWESkeletalMeshComponentTicker(const FObjectInitializer& ObjectInitializer);

};

