#pragma once
#include "CoreMinimal.h"
#include "UWEImGuiComponent.h"
#include "UWEHoverTargetDebugger.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEINTERACT_API UUWEHoverTargetDebugger : public UUWEImGuiComponent {
    GENERATED_BODY()
public:
    UUWEHoverTargetDebugger(const FObjectInitializer& ObjectInitializer);

};

