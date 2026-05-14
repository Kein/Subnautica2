#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EUWEAbilityConditionSource.h"
#include "UWEAbilityCondition.generated.h"

UCLASS(Abstract, CollapseCategories, Const, DefaultToInstanced, EditInlineNew, Within=UWEGameplayAbility)
class UWEABILITYSYSTEM_API UUWEAbilityCondition : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    bool bInvertCondition;
    
    UPROPERTY(EditDefaultsOnly)
    EUWEAbilityConditionSource ConditionSource;
    
public:
    UUWEAbilityCondition();

};

