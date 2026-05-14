#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "OnEventTrackerEventDelegate.h"
#include "UWEEventTrackerStatics.generated.h"

class AActor;
class UObject;
class UUWEEventTrackerComponent;
class UUWEPrimaryDataAssetBase;

UCLASS(BlueprintType)
class UWEEVENTTRACKER_API UUWEEventTrackerStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUWEEventTrackerStatics();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RegisterListenerForWorldEventAsset(UObject* WorldContextObject, FGameplayTag Verb, UUWEPrimaryDataAssetBase* Asset, const FOnEventTrackerEvent& Event);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RegisterListenerForWorldEvent(UObject* WorldContextObject, FGameplayTag Verb, FGameplayTag Tag, const FOnEventTrackerEvent& Event);
    
    UFUNCTION(BlueprintCallable)
    static void RegisterListenerForPlayerEventAsset(AActor* Actor, FGameplayTag Verb, UUWEPrimaryDataAssetBase* Asset, const FOnEventTrackerEvent& Event);
    
    UFUNCTION(BlueprintCallable)
    static void RegisterListenerForPlayerEvent(AActor* Actor, FGameplayTag Verb, FGameplayTag Tag, const FOnEventTrackerEvent& Event);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void NotifyWorldEventAssetId(UObject* WorldContextObject, FGameplayTag Verb, const FPrimaryAssetId& AssetId, double Value);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void NotifyWorldEventAsset(UObject* WorldContextObject, FGameplayTag Verb, const UUWEPrimaryDataAssetBase* Asset, double Value);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void NotifyWorldEvent(UObject* WorldContextObject, FGameplayTag Verb, FGameplayTag Tag, double Value);
    
    UFUNCTION(BlueprintCallable)
    static void NotifyPlayerEventAssetId(AActor* Actor, FGameplayTag Verb, const FPrimaryAssetId& AssetId, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void NotifyPlayerEventAsset(AActor* Actor, FGameplayTag Verb, const UUWEPrimaryDataAssetBase* Asset, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void NotifyPlayerEvent(AActor* Actor, FGameplayTag Verb, FGameplayTag Tag, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void NotifyPlayerAndWorldEventAssetId(AActor* Actor, FGameplayTag Verb, const FPrimaryAssetId& AssetId, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void NotifyPlayerAndWorldEventAsset(AActor* Actor, FGameplayTag Verb, const UUWEPrimaryDataAssetBase* Asset, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void NotifyPlayerAndWorldEvent(AActor* Actor, FGameplayTag Verb, FGameplayTag Tag, int32 Value);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void NotifyLocalPlayerEventAssetId(UObject* WorldContextObject, FGameplayTag Verb, const FPrimaryAssetId& AssetId, int32 Value);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void NotifyLocalPlayerEventAsset(UObject* WorldContextObject, FGameplayTag Verb, UUWEPrimaryDataAssetBase* Asset, int32 Value);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void NotifyLocalPlayerEvent(UObject* WorldContextObject, FGameplayTag Verb, FGameplayTag Tag, int32 Value);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UUWEEventTrackerComponent* GetWorldEventTracker(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetWorldEventCountAsset(UObject* WorldContextObject, FGameplayTag Verb, const UUWEPrimaryDataAssetBase* Asset);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetWorldEventCount(UObject* WorldContextObject, FGameplayTag Verb, FGameplayTag Tag);
    
    UFUNCTION(BlueprintPure)
    static int32 GetPlayerEventCountAsset(const AActor* Actor, FGameplayTag Verb, UUWEPrimaryDataAssetBase* Asset);
    
    UFUNCTION(BlueprintPure)
    static int32 GetPlayerEventCount(const AActor* Actor, FGameplayTag Verb, FGameplayTag Tag);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UUWEEventTrackerComponent* GetLocalPlayerEventTracker(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static UUWEEventTrackerComponent* GetEventTrackerFromActor(const AActor* Actor);
    
};

