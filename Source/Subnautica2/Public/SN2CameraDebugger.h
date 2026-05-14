#pragma once
#include "CoreMinimal.h"
#include "UWEImGuiComponent.h"
#include "SN2CameraDebugger.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2CameraDebugger : public UUWEImGuiComponent {
    GENERATED_BODY()
public:
    USN2CameraDebugger(const FObjectInitializer& ObjectInitializer);

};

