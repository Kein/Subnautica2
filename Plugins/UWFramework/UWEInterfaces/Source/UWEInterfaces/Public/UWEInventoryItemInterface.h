#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Engine/HitResult.h"
#include "GameplayTagContainer.h"
#include "UWEInventoryItemInterface.generated.h"

class AActor;

UINTERFACE(Blueprintable)
class UWEINTERFACES_API UUWEInventoryItemInterface : public UInterface {
    GENERATED_BODY()
};

class UWEINTERFACES_API IUWEInventoryItemInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PrePickupItem(AActor* PickupActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PreDropItem();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PostPickupItem(AActor* PickupActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PostDropItem();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ItemPickedUpFailed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ItemPickedUp(AActor* PickupActor, bool& bHandled);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ItemDropped(AActor* FromActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsPickupDisabled(AActor* FromActor, const FHitResult& HitResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HasEverBeenPickedUp();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetTunableDataValue(const FGameplayTag& TunableTag);
    
};

