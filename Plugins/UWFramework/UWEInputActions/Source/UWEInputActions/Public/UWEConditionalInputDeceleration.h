#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UWEConditionalInputDeceleration.generated.h"

UINTERFACE(Blueprintable)
class UUWEConditionalInputDeceleration : public UInterface {
    GENERATED_BODY()
};

class IUWEConditionalInputDeceleration : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintNativeEvent)
    bool DecelerateConditionMet() const;
    
};

