#pragma once
#include "CoreMinimal.h"
#include "UWEImGuiComponent.h"
#include "UWETimeSlicedTaskDiagnostic.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWETICKAGGREGATION_API UUWETimeSlicedTaskDiagnostic : public UUWEImGuiComponent {
    GENERATED_BODY()
public:
    UUWETimeSlicedTaskDiagnostic(const FObjectInitializer& ObjectInitializer);

};

