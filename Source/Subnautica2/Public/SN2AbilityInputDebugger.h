#pragma once
#include "CoreMinimal.h"
#include "UWEImGuiComponent.h"
#include "SN2AbilityInputDebugger.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2AbilityInputDebugger : public UUWEImGuiComponent {
    GENERATED_BODY()
public:
    USN2AbilityInputDebugger(const FObjectInitializer& ObjectInitializer);

};

