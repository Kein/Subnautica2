#pragma once
#include "CoreMinimal.h"
#include "UWEImGuiComponent.h"
#include "SN2AdaptationsDiagnostic.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2AdaptationsDiagnostic : public UUWEImGuiComponent {
    GENERATED_BODY()
public:
    USN2AdaptationsDiagnostic(const FObjectInitializer& ObjectInitializer);

};

