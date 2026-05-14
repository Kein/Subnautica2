#pragma once
#include "CoreMinimal.h"
#include "UWEPoweredApplianceComponent.h"
#include "UWEPowerTerminalComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEPOWER_API UUWEPowerTerminalComponent : public UUWEPoweredApplianceComponent {
    GENERATED_BODY()
public:
    UUWEPowerTerminalComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnInventoryIdAssigned();
    
};

