#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UWEExtraAttributeCaptureInterface.generated.h"

UINTERFACE(Blueprintable)
class UUWEExtraAttributeCaptureInterface : public UInterface {
    GENERATED_BODY()
};

class IUWEExtraAttributeCaptureInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintNativeEvent)
    void OnBeforeAttributeCapture();
    
};

