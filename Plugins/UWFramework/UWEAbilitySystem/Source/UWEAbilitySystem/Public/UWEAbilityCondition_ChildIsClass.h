#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UWEAbilityCondition.h"
#include "UWEAbilityCondition_ChildIsClass.generated.h"

class AActor;

UCLASS(CollapseCategories, EditInlineNew)
class UWEABILITYSYSTEM_API UUWEAbilityCondition_ChildIsClass : public UUWEAbilityCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AActor> RequiredClass;
    
    UPROPERTY(EditDefaultsOnly)
    bool bCheckHoverComponentOnly;
    
public:
    UUWEAbilityCondition_ChildIsClass();

};

