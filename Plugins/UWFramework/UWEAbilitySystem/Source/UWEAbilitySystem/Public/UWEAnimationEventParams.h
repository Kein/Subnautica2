#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UWEAnimationEventParams.generated.h"

USTRUCT(BlueprintType)
struct UWEABILITYSYSTEM_API FUWEAnimationEventParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag AnimationTag;
    
    FUWEAnimationEventParams();
};

