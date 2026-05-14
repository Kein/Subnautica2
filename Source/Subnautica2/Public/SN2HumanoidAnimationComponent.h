#pragma once
#include "CoreMinimal.h"
#include "SN2AnimationComponent.h"
#include "SN2HumanoidAnimationComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2HumanoidAnimationComponent : public USN2AnimationComponent {
    GENERATED_BODY()
public:
    USN2HumanoidAnimationComponent(const FObjectInitializer& ObjectInitializer);

};

