#pragma once
#include "CoreMinimal.h"
#include "UWEImGuiComponent.h"
#include "SN2AnimatingActorsDebugger.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2AnimatingActorsDebugger : public UUWEImGuiComponent {
    GENERATED_BODY()
public:
    USN2AnimatingActorsDebugger(const FObjectInitializer& ObjectInitializer);

};

