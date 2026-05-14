#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "UWESaveObject.h"
#include "CurrencyData.h"
#include "CurrencyLedger.h"
#include "CurrencyTransaction.h"
#include "OnCurrencyChangedDelegate.h"
#include "OnCurrencyChangedMulticastDelegate.h"
#include "OnPurchaseMadeDelegate.h"
#include "OnPurchaseMadeMulticastDelegate.h"
#include "UWEInGameCurrencyPlayerStateComponent.generated.h"

class UObject;
class UUWESaveHandle;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEINGAMECURRENCY_API UUWEInGameCurrencyPlayerStateComponent : public UActorComponent, public IUWESaveObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TMap<FGameplayTag, FOnCurrencyChangedMulticast> CurrencyChangeListeners;
    
    UPROPERTY()
    TMap<FGameplayTag, FOnPurchaseMadeMulticast> PurchaseMadeListeners;
    
    UPROPERTY(SaveGame, ReplicatedUsing=OnRep_Transactions)
    TArray<FCurrencyTransaction> Transactions;
    
    UPROPERTY()
    TMap<FGameplayTag, FCurrencyLedger> CurrencyLedgers;
    
    UPROPERTY()
    UUWESaveHandle* SaveHandle;
    
public:
    UUWEInGameCurrencyPlayerStateComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UnregisterCurrencyPurchaseListener(FGameplayTag CurrencyTag, const FOnPurchaseMade& OnPurchaseMade);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterCurrencyListener(FGameplayTag CurrencyTag, const FOnCurrencyChanged& OnCurrencyChanged);
    
protected:
    UFUNCTION(Reliable, Server)
    void Server_AddPurchase(const FGameplayTag& CurrencyTag, UObject* Purchase, const int32 Cost);
    
    UFUNCTION(Reliable, Server)
    void Server_AddCurrency(const FGameplayTag& CurrencyTag, UObject* Source, const int32 Amount);
    
public:
    UFUNCTION(BlueprintCallable)
    void RegisterCurrencyPurchaseListener(FGameplayTag CurrencyTag, const FOnPurchaseMade& OnPurchaseMade);
    
    UFUNCTION(BlueprintCallable)
    void RegisterCurrencyListener(FGameplayTag CurrencyTag, const FOnCurrencyChanged& OnCurrencyChanged);
    
protected:
    UFUNCTION()
    void OnRep_Transactions(const TArray<FCurrencyTransaction>& PriorTransactions);
    
public:
    UFUNCTION(BlueprintPure)
    bool HasPurchaseForCurrency(FGameplayTag CurrencyTag, const UObject* Purchase) const;
    
    UFUNCTION(BlueprintPure)
    bool HasIncomeFromSource(FGameplayTag CurrencyTag, const UObject* Source) const;
    
    UFUNCTION(BlueprintPure)
    FCurrencyData GetCurrencyData(FGameplayTag CurrencyTag) const;
    
    UFUNCTION(BlueprintPure)
    TArray<TSoftObjectPtr<UObject>> GetAllValidPurchases(FGameplayTag CurrencyTag) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FGameplayTag> GetAllCurrencyTags() const;
    
    UFUNCTION(BlueprintPure)
    bool CanAffordPurchase(FGameplayTag CurrencyTag, const int32 Amount) const;
    
    UFUNCTION(BlueprintCallable)
    void AddPurchase(FGameplayTag CurrencyTag, UObject* Purchase, const int32 Cost);
    
    UFUNCTION(BlueprintCallable)
    void AddCurrency(FGameplayTag CurrencyTag, UObject* Source, const int32 Amount);
    

    // Fix for true pure virtual functions not being implemented
};

