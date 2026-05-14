#pragma once
#include "CoreMinimal.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "UWEActiveDynamicEvent.h"
#include "UWEActiveDynamicEventArray.generated.h"

class UUWEDynamicEventsStateComponent;

USTRUCT(BlueprintType)
struct UWEDYNAMICEVENTS_API FUWEActiveDynamicEventArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FUWEActiveDynamicEvent> ActiveEvents;
    
private:
    UPROPERTY(Instanced, NotReplicated)
    UUWEDynamicEventsStateComponent* OwnerComponent;
    
public:
    FUWEActiveDynamicEventArray();
};

