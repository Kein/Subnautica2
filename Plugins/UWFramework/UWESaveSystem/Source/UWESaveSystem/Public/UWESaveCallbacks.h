#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UWESaveCallbacks.generated.h"

UINTERFACE(Blueprintable)
class UUWESaveCallbacks : public UInterface {
    GENERATED_BODY()
};

class IUWESaveCallbacks : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintNativeEvent)
    void OnPreSerialize();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnPreDeserialize();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnPostSerialize();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnPostDeserialize();
    
};

