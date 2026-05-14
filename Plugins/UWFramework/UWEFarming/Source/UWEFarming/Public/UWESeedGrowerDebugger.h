#pragma once
#include "CoreMinimal.h"
#include "UWEImGuiComponent.h"
#include "UWESeedGrowerDebugger.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEFARMING_API UUWESeedGrowerDebugger : public UUWEImGuiComponent {
    GENERATED_BODY()
public:
    UUWESeedGrowerDebugger(const FObjectInitializer& ObjectInitializer);

};

