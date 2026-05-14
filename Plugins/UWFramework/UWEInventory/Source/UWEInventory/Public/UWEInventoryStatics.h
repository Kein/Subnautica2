#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/HitResult.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "UWEInventoryItem.h"
#include "UWEInventoryItemAttribute.h"
#include "UWEInventoryStatics.generated.h"

class AActor;
class UDataAsset;
class UObject;
class UUWEInventoryComponent;
class UUWEItemType;

UCLASS(BlueprintType)
class UWEINVENTORY_API UUWEInventoryStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUWEInventoryStatics();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AActor* SpawnItemSynchronous(UObject* WorldContextObject, const UUWEItemType* ItemType, FTransform TargetTransform, bool ShouldSimulatePhysics, FGuid ItemGuid);
    
    UFUNCTION(BlueprintCallable)
    static void SetInventoryAttributeTag(UPARAM(Ref) TArray<FUWEInventoryItemAttribute>& Attributes, FGameplayTag AttributeName, FGameplayTag Value, bool& bFound);
    
    UFUNCTION(BlueprintCallable)
    static void SetInventoryAttributeString(UPARAM(Ref) TArray<FUWEInventoryItemAttribute>& Attributes, FGameplayTag AttributeName, const FString& Value, bool& bFound);
    
    UFUNCTION(BlueprintCallable)
    static void SetInventoryAttributeInt(UPARAM(Ref) TArray<FUWEInventoryItemAttribute>& Attributes, FGameplayTag AttributeName, int32 Value, bool& bFound);
    
    UFUNCTION(BlueprintCallable)
    static void SetInventoryAttributeFloat(UPARAM(Ref) TArray<FUWEInventoryItemAttribute>& Attributes, FGameplayTag AttributeName, float Value, bool& bFound);
    
    UFUNCTION(BlueprintCallable)
    static void SetInventoryAttributeDataAsset(UPARAM(Ref) TArray<FUWEInventoryItemAttribute>& Attributes, FGameplayTag AttributeName, UDataAsset* DataAsset, bool& bFound);
    
    UFUNCTION(BlueprintCallable)
    static bool IsActorPickupable(AActor* PickingUpActor, AActor* Actor, FHitResult& HitResult);
    
    UFUNCTION(BlueprintPure)
    static UUWEItemType* GetItemTypeFromName(const FString& ItemName, const bool bPartial, bool& bOutFound);
    
    UFUNCTION(BlueprintPure)
    static UUWEItemType* GetItemTypeForPickupActor(const AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    static FGameplayTag GetInventoryAttributeTag(TArray<FUWEInventoryItemAttribute>& Attributes, FGameplayTag AttributeName, bool& bFound);
    
    UFUNCTION(BlueprintPure)
    static FString GetInventoryAttributeString(const TArray<FUWEInventoryItemAttribute>& Attributes, FGameplayTag AttributeName, bool& bFound);
    
    UFUNCTION(BlueprintPure)
    static int32 GetInventoryAttributeInt(const TArray<FUWEInventoryItemAttribute>& Attributes, FGameplayTag AttributeName, bool& bFound);
    
    UFUNCTION(BlueprintPure)
    static float GetInventoryAttributeFloat(const TArray<FUWEInventoryItemAttribute>& Attributes, FGameplayTag AttributeName, bool& bFound);
    
    UFUNCTION(BlueprintPure)
    static UDataAsset* GetInventoryAttributeDataAsset(TSubclassOf<UDataAsset> DataAssetClass, TArray<FUWEInventoryItemAttribute>& Attributes, FGameplayTag AttributeName, bool& bFound);
    
    UFUNCTION(BlueprintPure)
    static TArray<FUWEInventoryItem> GetAllInventoryItemStacksOfType(UUWEItemType* ItemType, UUWEInventoryComponent* InventoryComponent);
    
};

