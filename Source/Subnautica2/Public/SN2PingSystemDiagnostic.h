#pragma once
#include "CoreMinimal.h"
#include "UWEImGuiComponent.h"
#include "SN2PingSystemDiagnostic.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2PingSystemDiagnostic : public UUWEImGuiComponent {
    GENERATED_BODY()
public:
    USN2PingSystemDiagnostic(const FObjectInitializer& ObjectInitializer);

};

