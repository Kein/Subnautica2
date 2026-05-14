#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UWEAbilityCondition.h"
#include "UWEAbilityCondition_TagRequirement.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UWEABILITYSYSTEM_API UUWEAbilityCondition_TagRequirement : public UUWEAbilityCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer RequiredTags;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer BlockingTags;
    
public:
    UUWEAbilityCondition_TagRequirement();

};

