#pragma once
#include "CoreMinimal.h"
#include "EUWEAbilityConditionSource.h"
#include "UWEAbilityCondition.h"
#include "UWEAbilityCondition_HasInventorySpace.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UWEABILITYSYSTEM_API UUWEAbilityCondition_HasInventorySpace : public UUWEAbilityCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    EUWEAbilityConditionSource Destination;
    
public:
    UUWEAbilityCondition_HasInventorySpace();

};

