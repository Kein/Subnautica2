#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectComponent.h"
#include "GameplayEffectTypes.h"
#include "UWERequireSourceTagsToContinueComponent.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UWEABILITYSYSTEM_API UUWERequireSourceTagsToContinueComponent : public UGameplayEffectComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagRequirements ApplicationTagRequirements;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagRequirements OngoingTagRequirements;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagRequirements RemovalTagRequirements;
    
    UUWERequireSourceTagsToContinueComponent();

};

