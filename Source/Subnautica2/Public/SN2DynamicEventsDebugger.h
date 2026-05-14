#pragma once
#include "CoreMinimal.h"
#include "UWEImGuiComponent.h"
#include "SN2DynamicEventsDebugger.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2DynamicEventsDebugger : public UUWEImGuiComponent {
    GENERATED_BODY()
public:
    USN2DynamicEventsDebugger(const FObjectInitializer& ObjectInitializer);

};

