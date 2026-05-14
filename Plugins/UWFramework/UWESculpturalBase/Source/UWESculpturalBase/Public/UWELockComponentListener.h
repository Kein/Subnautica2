#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UWELockComponentListener.generated.h"

class UUWEBaseCellLockComponent;

UINTERFACE(Blueprintable)
class UWESCULPTURALBASE_API UUWELockComponentListener : public UInterface {
    GENERATED_BODY()
};

class UWESCULPTURALBASE_API IUWELockComponentListener : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintNativeEvent)
    void OnLockAdded(const UUWEBaseCellLockComponent* LockComponent);
    
};

