#pragma once
#include "CoreMinimal.h"
#include "UWEImGuiComponent.h"
#include "UWESonarDiagnostic.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWESONAR_API UUWESonarDiagnostic : public UUWEImGuiComponent {
    GENERATED_BODY()
public:
    UUWESonarDiagnostic(const FObjectInitializer& ObjectInitializer);

};

