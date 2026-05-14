#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UWEAbilityCondition.h"
#include "UWEAbilityCondition_HasActorData.generated.h"

class UUWEActorDataAsset;

UCLASS(CollapseCategories, EditInlineNew)
class UWEABILITYSYSTEM_API UUWEAbilityCondition_HasActorData : public UUWEAbilityCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UUWEActorDataAsset> RequiredActorData;
    
public:
    UUWEAbilityCondition_HasActorData();

};

