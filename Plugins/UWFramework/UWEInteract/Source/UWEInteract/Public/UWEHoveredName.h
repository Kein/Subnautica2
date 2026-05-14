#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UWEHoveredName.generated.h"

UINTERFACE(Blueprintable)
class UWEINTERACT_API UUWEHoveredName : public UInterface {
    GENERATED_BODY()
};

class UWEINTERACT_API IUWEHoveredName : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintNativeEvent)
    FText GetHoveredName() const;
    
};

