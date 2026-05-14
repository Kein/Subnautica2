#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "GameplayTagContainer.h"
#include "UWEAnimNotifyState_AbilityAnimation.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UWEABILITYSYSTEM_API UUWEAnimNotifyState_AbilityAnimation : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTag AnimationTag;
    
    UUWEAnimNotifyState_AbilityAnimation();

};

