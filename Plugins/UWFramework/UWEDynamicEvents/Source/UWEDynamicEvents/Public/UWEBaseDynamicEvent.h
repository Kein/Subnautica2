#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UWEBaseDynamicEvent.generated.h"

UCLASS(Abstract, CollapseCategories, DefaultToInstanced, EditInlineNew)
class UWEDYNAMICEVENTS_API UUWEBaseDynamicEvent : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(SaveGame)
    FPrimaryAssetId DynamicEventPrimaryAssetId;
    
    UPROPERTY(SaveGame)
    FGuid EventID;
    
public:
    UUWEBaseDynamicEvent();

};

