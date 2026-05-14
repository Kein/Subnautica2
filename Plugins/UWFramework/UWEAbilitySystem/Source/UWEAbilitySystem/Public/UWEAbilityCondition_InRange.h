#pragma once
#include "CoreMinimal.h"
#include "UWEAbilityCondition.h"
#include "UWEAbilityCondition_InRange.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UWEABILITYSYSTEM_API UUWEAbilityCondition_InRange : public UUWEAbilityCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float MaxRange;
    
public:
    UUWEAbilityCondition_InRange();

};

