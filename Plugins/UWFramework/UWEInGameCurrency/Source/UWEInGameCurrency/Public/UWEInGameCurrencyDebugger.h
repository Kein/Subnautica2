#pragma once
#include "CoreMinimal.h"
#include "UWEImGuiComponent.h"
#include "UWEInGameCurrencyDebugger.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEINGAMECURRENCY_API UUWEInGameCurrencyDebugger : public UUWEImGuiComponent {
    GENERATED_BODY()
public:
    UUWEInGameCurrencyDebugger(const FObjectInitializer& ObjectInitializer);

};

