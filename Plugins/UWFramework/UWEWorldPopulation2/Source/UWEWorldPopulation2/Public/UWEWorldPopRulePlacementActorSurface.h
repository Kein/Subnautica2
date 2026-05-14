#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UWEWorldPopRulePlacement.h"
#include "UWEWorldPopRulePlacementActorSurface.generated.h"

UCLASS(EditInlineNew)
class UWEWORLDPOPULATION2_API UUWEWorldPopRulePlacementActorSurface : public UUWEWorldPopRulePlacement {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer MustHaveTags;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer ExcludeTags;
    
    UUWEWorldPopRulePlacementActorSurface();

};

