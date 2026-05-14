#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UWEAbilityCondition.h"
#include "UWEAbilityCondition_IsClass.generated.h"

class AActor;

UCLASS(CollapseCategories, EditInlineNew)
class UWEABILITYSYSTEM_API UUWEAbilityCondition_IsClass : public UUWEAbilityCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AActor> RequiredClass;
    
public:
    UUWEAbilityCondition_IsClass();

};

