#pragma once
#include "CoreMinimal.h"
#include "UWEImGuiComponent.h"
#include "SN2AIDirectorDebugger.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2AIDirectorDebugger : public UUWEImGuiComponent {
    GENERATED_BODY()
public:
    USN2AIDirectorDebugger(const FObjectInitializer& ObjectInitializer);

};

