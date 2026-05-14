#pragma once
#include "CoreMinimal.h"
#include "UWEImGuiComponent.h"
#include "UWEWorldPop2Diagnostic.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEWORLDPOPULATION2_API UUWEWorldPop2Diagnostic : public UUWEImGuiComponent {
    GENERATED_BODY()
public:
    UUWEWorldPop2Diagnostic(const FObjectInitializer& ObjectInitializer);

};

