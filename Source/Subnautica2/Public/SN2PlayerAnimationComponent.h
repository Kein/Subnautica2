#pragma once
#include "CoreMinimal.h"
#include "SN2AnimationComponent.h"
#include "SN2PlayerAnimationComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2PlayerAnimationComponent : public USN2AnimationComponent {
    GENERATED_BODY()
public:
    USN2PlayerAnimationComponent(const FObjectInitializer& ObjectInitializer);

};

