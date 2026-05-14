#pragma once
#include "CoreMinimal.h"
#include "UWEAbilityCondition.h"
#include "UWEAbilityCondition_WithinMaxDistance.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UWEABILITYSYSTEM_API UUWEAbilityCondition_WithinMaxDistance : public UUWEAbilityCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    bool bUseTunableData;
    
public:
    UUWEAbilityCondition_WithinMaxDistance();

};

