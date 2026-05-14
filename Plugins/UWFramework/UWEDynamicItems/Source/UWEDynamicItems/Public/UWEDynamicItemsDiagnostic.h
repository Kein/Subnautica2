#pragma once
#include "CoreMinimal.h"
#include "UWEImGuiComponent.h"
#include "UWEDynamicItemsDiagnostic.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEDYNAMICITEMS_API UUWEDynamicItemsDiagnostic : public UUWEImGuiComponent {
    GENERATED_BODY()
public:
    UUWEDynamicItemsDiagnostic(const FObjectInitializer& ObjectInitializer);

};

