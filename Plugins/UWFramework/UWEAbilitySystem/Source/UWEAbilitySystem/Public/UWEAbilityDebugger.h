#pragma once
#include "CoreMinimal.h"
#include "UWEImGuiComponent.h"
#include "UWEAbilityDebugger.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEABILITYSYSTEM_API UUWEAbilityDebugger : public UUWEImGuiComponent {
    GENERATED_BODY()
public:
    UUWEAbilityDebugger(const FObjectInitializer& ObjectInitializer);

};

