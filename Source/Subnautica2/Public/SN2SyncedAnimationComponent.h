#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SN2SyncedAnimationComponent.generated.h"

UCLASS(Abstract, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2SyncedAnimationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    USN2SyncedAnimationComponent(const FObjectInitializer& ObjectInitializer);

};

