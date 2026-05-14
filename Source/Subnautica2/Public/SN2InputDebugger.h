#pragma once
#include "CoreMinimal.h"
#include "UWEImGuiComponent.h"
#include "SN2InputDebugger.generated.h"

class UEnhancedInputComponent;
class UInputAction;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2InputDebugger : public UUWEImGuiComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<UInputAction*> CurrentlyTriggeredActions;
    
    UPROPERTY()
    TArray<UInputAction*> RecentlyTriggeredActions;
    
    UPROPERTY(Export)
    TWeakObjectPtr<UEnhancedInputComponent> BoundInputComponent;
    
public:
    USN2InputDebugger(const FObjectInitializer& ObjectInitializer);

};

