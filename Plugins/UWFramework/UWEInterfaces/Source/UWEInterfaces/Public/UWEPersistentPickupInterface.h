#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Interface.h"
#include "UWEPersistentPickupInterface.generated.h"

UINTERFACE(Blueprintable)
class UWEINTERFACES_API UUWEPersistentPickupInterface : public UInterface {
    GENERATED_BODY()
};

class UWEINTERFACES_API IUWEPersistentPickupInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HasBeenPickedUp();
    
    UFUNCTION(BlueprintNativeEvent)
    void HandlePickedUp();
    
    UFUNCTION(BlueprintNativeEvent)
    FGuid GetPickupActorUID() const;
    
};

