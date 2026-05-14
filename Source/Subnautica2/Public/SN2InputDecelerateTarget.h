#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SN2InputDecelerateTarget.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2InputDecelerateTarget : public UActorComponent {
    GENERATED_BODY()
public:
    USN2InputDecelerateTarget(const FObjectInitializer& ObjectInitializer);

};

