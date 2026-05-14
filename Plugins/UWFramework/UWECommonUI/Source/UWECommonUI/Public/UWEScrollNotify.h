#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UWEScrollNotify.generated.h"

class UUWEScrollBox;

UINTERFACE(Blueprintable)
class UUWEScrollNotify : public UInterface {
    GENERATED_BODY()
};

class IUWEScrollNotify : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ScrollBoxOnUserScrolled(UUWEScrollBox* ScrollBox);
    
};

