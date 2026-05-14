#pragma once
#include "CoreMinimal.h"
#include "UWEOverlapDetectorComponent.h"
#include "UWESweepTestEnforceComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEPHYSICS_API UUWESweepTestEnforceComponent : public UUWEOverlapDetectorComponent {
    GENERATED_BODY()
public:
    UUWESweepTestEnforceComponent(const FObjectInitializer& ObjectInitializer);

};

