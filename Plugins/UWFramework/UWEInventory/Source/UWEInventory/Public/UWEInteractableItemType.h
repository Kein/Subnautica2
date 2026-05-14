#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UWEItemType.h"
#include "UWEInteractableItemType.generated.h"

class UGameplayEffect;
class UUWEStoryGoal;

UCLASS(EditInlineNew)
class UWEINVENTORY_API UUWEInteractableItemType : public UUWEItemType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSoftClassPtr<UGameplayEffect>> GrantedEffects;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<UUWEStoryGoal*> ItemInteractedStoryGoalsRef;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTagContainer InteractMustHaveTags;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTagContainer InteractCannotHaveTags;
    
    UUWEInteractableItemType();

};

