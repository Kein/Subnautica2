#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UWEAbilityCondition.h"
#include "UWEAbilityCondition_HasComponent.generated.h"

class UActorComponent;

UCLASS(CollapseCategories, EditInlineNew)
class UWEABILITYSYSTEM_API UUWEAbilityCondition_HasComponent : public UUWEAbilityCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UActorComponent> ComponentClass;
    
    UPROPERTY(EditDefaultsOnly)
    bool bCheckHoverComponentOnly;
    
public:
    UUWEAbilityCondition_HasComponent();

};

