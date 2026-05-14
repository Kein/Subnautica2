#pragma once
#include "CoreMinimal.h"
#include "UWEFilterRuleData.generated.h"

class AActor;
class AUWEVolumeActor;

USTRUCT()
struct FUWEFilterRuleData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TSet<AUWEVolumeActor*> Volumes;
    
    UPROPERTY(Transient)
    TSet<AActor*> PCGVolumeActors;
    
    UWEWORLDPOPULATION2_API FUWEFilterRuleData();
};

