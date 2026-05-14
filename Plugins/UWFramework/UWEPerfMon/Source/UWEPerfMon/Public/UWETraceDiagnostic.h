#pragma once
#include "CoreMinimal.h"
#include "UWEImGuiComponent.h"
#include "UWETraceDiagnostic.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEPERFMON_API UUWETraceDiagnostic : public UUWEImGuiComponent {
    GENERATED_BODY()
public:
    UUWETraceDiagnostic(const FObjectInitializer& ObjectInitializer);

};

