#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "UWEActiveDynamicEvent.generated.h"

class UUWEDynamicEventDataAsset;

USTRUCT(BlueprintType)
struct UWEDYNAMICEVENTS_API FUWEActiveDynamicEvent : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FGuid EventID;
    
    UPROPERTY(Transient)
    FPrimaryAssetId DynamicEventPrimaryAssetId;
    
    UPROPERTY()
    TSoftObjectPtr<UUWEDynamicEventDataAsset> EventDataAsset;
    
    FUWEActiveDynamicEvent();
};

