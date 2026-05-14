#pragma once
#include "CoreMinimal.h"
#include "UWEAggregatedActorTickerBase.h"
#include "UWEGameplayCueTicker.generated.h"

class AUWEGameplayCueNotify_Looping;

UCLASS()
class UWEGAMEPLAYCUES_API AUWEGameplayCueTicker : public AUWEAggregatedActorTickerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TSet<AUWEGameplayCueNotify_Looping*> Actors;
    
public:
    AUWEGameplayCueTicker(const FObjectInitializer& ObjectInitializer);

};

