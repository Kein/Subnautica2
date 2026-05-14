#include "UWEInGameCurrencyPlayerStateComponent.h"
#include "Net/UnrealNetwork.h"

UUWEInGameCurrencyPlayerStateComponent::UUWEInGameCurrencyPlayerStateComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SaveHandle = NULL;
}

void UUWEInGameCurrencyPlayerStateComponent::UnregisterCurrencyPurchaseListener(FGameplayTag CurrencyTag, const FOnPurchaseMade& OnPurchaseMade) {
}

void UUWEInGameCurrencyPlayerStateComponent::UnregisterCurrencyListener(FGameplayTag CurrencyTag, const FOnCurrencyChanged& OnCurrencyChanged) {
}

void UUWEInGameCurrencyPlayerStateComponent::Server_AddPurchase_Implementation(const FGameplayTag& CurrencyTag, UObject* Purchase, const int32 Cost) {
}

void UUWEInGameCurrencyPlayerStateComponent::Server_AddCurrency_Implementation(const FGameplayTag& CurrencyTag, UObject* Source, const int32 Amount) {
}

void UUWEInGameCurrencyPlayerStateComponent::RegisterCurrencyPurchaseListener(FGameplayTag CurrencyTag, const FOnPurchaseMade& OnPurchaseMade) {
}

void UUWEInGameCurrencyPlayerStateComponent::RegisterCurrencyListener(FGameplayTag CurrencyTag, const FOnCurrencyChanged& OnCurrencyChanged) {
}

void UUWEInGameCurrencyPlayerStateComponent::OnRep_Transactions(const TArray<FCurrencyTransaction>& PriorTransactions) {
}

bool UUWEInGameCurrencyPlayerStateComponent::HasPurchaseForCurrency(FGameplayTag CurrencyTag, const UObject* Purchase) const {
    return false;
}

bool UUWEInGameCurrencyPlayerStateComponent::HasIncomeFromSource(FGameplayTag CurrencyTag, const UObject* Source) const {
    return false;
}

FCurrencyData UUWEInGameCurrencyPlayerStateComponent::GetCurrencyData(FGameplayTag CurrencyTag) const {
    return FCurrencyData{};
}

TArray<TSoftObjectPtr<UObject>> UUWEInGameCurrencyPlayerStateComponent::GetAllValidPurchases(FGameplayTag CurrencyTag) const {
    return TArray<TSoftObjectPtr<UObject>>();
}

TArray<FGameplayTag> UUWEInGameCurrencyPlayerStateComponent::GetAllCurrencyTags() const {
    return TArray<FGameplayTag>();
}

bool UUWEInGameCurrencyPlayerStateComponent::CanAffordPurchase(FGameplayTag CurrencyTag, const int32 Amount) const {
    return false;
}

void UUWEInGameCurrencyPlayerStateComponent::AddPurchase(FGameplayTag CurrencyTag, UObject* Purchase, const int32 Cost) {
}

void UUWEInGameCurrencyPlayerStateComponent::AddCurrency(FGameplayTag CurrencyTag, UObject* Source, const int32 Amount) {
}

void UUWEInGameCurrencyPlayerStateComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UUWEInGameCurrencyPlayerStateComponent, Transactions);
}


