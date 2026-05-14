#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UWEPerformanceCameraLogic.generated.h"

UINTERFACE(Blueprintable)
class UUWEPerformanceCameraLogic : public UInterface {
    GENERATED_BODY()
};

class IUWEPerformanceCameraLogic : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintImplementableEvent)
    void Teardown();
    
    UFUNCTION(BlueprintImplementableEvent)
    void Setup();
    
};

