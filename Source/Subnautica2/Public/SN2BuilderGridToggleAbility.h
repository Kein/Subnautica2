#pragma once
#include "CoreMinimal.h"
#include "UWEGameplayAbility.h"
#include "EBuilderSnapping.h"
#include "SN2BuilderGridToggleAbility.generated.h"

UCLASS()
class SUBNAUTICA2_API USN2BuilderGridToggleAbility : public UUWEGameplayAbility {
    GENERATED_BODY()
public:
    USN2BuilderGridToggleAbility();

protected:
    UFUNCTION(BlueprintCallable)
    EBuilderSnapping ToggleGridSnapping();
    
};

