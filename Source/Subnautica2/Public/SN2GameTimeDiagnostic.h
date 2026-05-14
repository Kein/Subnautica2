#pragma once
#include "CoreMinimal.h"
#include "UWEImGuiComponent.h"
#include "SN2GameTimeDiagnostic.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2GameTimeDiagnostic : public UUWEImGuiComponent {
    GENERATED_BODY()
public:
    USN2GameTimeDiagnostic(const FObjectInitializer& ObjectInitializer);

};

