#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SN2Movable.generated.h"

UINTERFACE(Blueprintable)
class USN2Movable : public UInterface {
    GENERATED_BODY()
};

class ISN2Movable : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnStartMove();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlacementChanged();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnMove();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCancelMove();
    
    UFUNCTION(BlueprintNativeEvent)
    bool CanBeMoved();
    
};

