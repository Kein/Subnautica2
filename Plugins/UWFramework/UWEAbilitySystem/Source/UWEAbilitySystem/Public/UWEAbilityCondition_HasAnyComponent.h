#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UWEAbilityCondition.h"
#include "UWEAbilityCondition_HasAnyComponent.generated.h"

class UActorComponent;

UCLASS(CollapseCategories, EditInlineNew)
class UWEABILITYSYSTEM_API UUWEAbilityCondition_HasAnyComponent : public UUWEAbilityCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<UActorComponent>> ComponentClasses;
    
public:
    UUWEAbilityCondition_HasAnyComponent();

};

