#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UWEActorLifeCycle.generated.h"

UINTERFACE(Blueprintable)
class UWEINTERFACES_API UUWEActorLifeCycle : public UInterface {
    GENERATED_BODY()
};

class UWEINTERFACES_API IUWEActorLifeCycle : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintNativeEvent)
    void HandleDynamicItemDespawned();
    
};

