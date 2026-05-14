#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Interface.h"
#include "UWEInventoryItem.h"
#include "UWEToolInterface.generated.h"

class AUWEBaseItem;
class UUWEItemType;

UINTERFACE(Blueprintable)
class UUWEToolInterface : public UInterface {
    GENERATED_BODY()
};

class IUWEToolInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FUWEInventoryItem ReplaceToolAmmo(FUWEInventoryItem NewAmmo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AUWEBaseItem* ReleaseToolAmmo();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UUWEItemType* GetToolAmmoType();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetToolAmmoPercent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UUWEItemType* GetBatteryType();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FGuid GetBatteryItemId();
    
};

