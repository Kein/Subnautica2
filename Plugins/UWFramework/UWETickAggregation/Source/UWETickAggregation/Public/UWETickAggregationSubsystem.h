#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "UWETickAggregationSubsystem.generated.h"

class AUWEAggregatedActorTickerBase;
class AUWEAggregatedComponentTickerBase;

UCLASS(Abstract)
class UWETICKAGGREGATION_API UUWETickAggregationSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TMap<UClass*, AUWEAggregatedComponentTickerBase*> ComponentTickers;
    
    UPROPERTY()
    TMap<UClass*, AUWEAggregatedActorTickerBase*> ActorTickers;
    
public:
    UUWETickAggregationSubsystem();

};

