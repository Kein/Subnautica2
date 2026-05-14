#pragma once
#include "CoreMinimal.h"
#include "UWEOutOfBoundsCheckComponent.h"
#include "SN2OutOfBoundsCheckComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2OutOfBoundsCheckComponent : public UUWEOutOfBoundsCheckComponent {
    GENERATED_BODY()
public:
    USN2OutOfBoundsCheckComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnUnstuck();
    
    UFUNCTION()
    void OnRespawned();
    
};

