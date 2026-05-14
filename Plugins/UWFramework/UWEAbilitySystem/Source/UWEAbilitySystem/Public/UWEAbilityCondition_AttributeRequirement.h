#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "EUWEAttributeComparisonMethod.h"
#include "UWEAbilityCondition.h"
#include "UWEAbilityCondition_AttributeRequirement.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UWEABILITYSYSTEM_API UUWEAbilityCondition_AttributeRequirement : public UUWEAbilityCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FGameplayAttribute Attribute;
    
    UPROPERTY(EditDefaultsOnly)
    bool bOverrideMaxAttribute;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayAttribute MaxAttribute;
    
    UPROPERTY(EditDefaultsOnly)
    float OverrideMaxAttributeValue;
    
    UPROPERTY(EditDefaultsOnly)
    EUWEAttributeComparisonMethod ComparisonMethod;
    
    UPROPERTY(EditDefaultsOnly)
    float MinPercentage;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxPercentage;
    
public:
    UUWEAbilityCondition_AttributeRequirement();

};

