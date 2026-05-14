#pragma once
#include "CoreMinimal.h"
#include "UWEImGuiComponent.h"
#include "UWEBiomodsDebugger.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEBIOMODS_API UUWEBiomodsDebugger : public UUWEImGuiComponent {
    GENERATED_BODY()
public:
    UUWEBiomodsDebugger(const FObjectInitializer& ObjectInitializer);

};

