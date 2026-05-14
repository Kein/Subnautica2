#pragma once
#include "CoreMinimal.h"
#include "UWEImGuiComponent.h"
#include "UWETickAggregationDiagnostic.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWETICKAGGREGATION_API UUWETickAggregationDiagnostic : public UUWEImGuiComponent {
    GENERATED_BODY()
public:
    UUWETickAggregationDiagnostic(const FObjectInitializer& ObjectInitializer);

};

