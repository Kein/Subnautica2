#pragma once
#include "CoreMinimal.h"
#include "UWEImGuiComponent.h"
#include "UWEEntitlementsDiagnostic.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEENTITLEMENTS_API UUWEEntitlementsDiagnostic : public UUWEImGuiComponent {
    GENERATED_BODY()
public:
    UUWEEntitlementsDiagnostic(const FObjectInitializer& ObjectInitializer);

};

