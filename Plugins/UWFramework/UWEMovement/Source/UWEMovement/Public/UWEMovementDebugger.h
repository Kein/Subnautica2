#pragma once
#include "CoreMinimal.h"
#include "UWEImGuiComponent.h"
#include "UWEMovementDebugger.generated.h"

class APawn;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEMOVEMENT_API UUWEMovementDebugger : public UUWEImGuiComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TWeakObjectPtr<APawn> LastPossessedPawn;
    
public:
    UUWEMovementDebugger(const FObjectInitializer& ObjectInitializer);

};

