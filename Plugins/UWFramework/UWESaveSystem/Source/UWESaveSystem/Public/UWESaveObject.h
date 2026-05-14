#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UWESaveObject.generated.h"

class UUWESaveHandle;

UINTERFACE(Blueprintable)
class UUWESaveObject : public UInterface {
    GENERATED_BODY()
};

class IUWESaveObject : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintNativeEvent)
    void SetHandle(UUWESaveHandle* InSaveHandle);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnPreSerialize();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnPreDeserialize();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnPostSerialize();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnPostDeserialize();
    
};

