#pragma once
#include "CoreMinimal.h"
#include "UWEImGuiComponent.h"
#include "UWERenderResourceDiagnostic.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEPERFMON_API UUWERenderResourceDiagnostic : public UUWEImGuiComponent {
    GENERATED_BODY()
public:
    UUWERenderResourceDiagnostic(const FObjectInitializer& ObjectInitializer);

};

