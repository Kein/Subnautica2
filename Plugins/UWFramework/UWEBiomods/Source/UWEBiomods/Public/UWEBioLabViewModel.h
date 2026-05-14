#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilitySpecHandle.h"
#include "MVVMViewModelBase.h"
#include "UWEBioLabViewModel.generated.h"

class UUWEAbilitySystemComponent;
class UUWEBioAbilityData;
class UUWEBioAbilityViewModel;
class UUWEBiomodCrafterComponent;
class UUWEBiomodCrafterInteractionComponent;

UCLASS()
class UWEBIOMODS_API UUWEBioLabViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TArray<UUWEBioAbilityViewModel*> AvailableBioMods;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<UUWEBioAbilityViewModel*> AvailableActiveBioMods;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<UUWEBioAbilityViewModel*> AvailablePassiveBioMods;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<UUWEBioAbilityViewModel*> InstalledBioMods;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<UUWEBioAbilityViewModel*> InstalledActiveBioMods;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<UUWEBioAbilityViewModel*> InstalledPassiveBioMods;
    
    UPROPERTY(BlueprintReadOnly)
    int32 AvailablePassiveBiomodSlots;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<UUWEBioAbilityData*> AvailabilityOverridenBioData;
    
private:
    UPROPERTY(Export)
    TWeakObjectPtr<UUWEBiomodCrafterComponent> CrafterComponent;
    
    UPROPERTY(Export)
    TWeakObjectPtr<UUWEBiomodCrafterInteractionComponent> InteractorComponent;
    
    UPROPERTY(Export)
    TWeakObjectPtr<UUWEAbilitySystemComponent> AbilitySystemComponent;
    
public:
    UUWEBioLabViewModel();

private:
    UFUNCTION()
    void OnAbilityRemoved(const UUWEAbilitySystemComponent* ASC, const FGameplayAbilitySpecHandle& AbilitySpecHandle);
    
    UFUNCTION()
    void OnAbilityGiven(const UUWEAbilitySystemComponent* ASC, const FGameplayAbilitySpecHandle& AbilitySpecHandle);
    
public:
    UFUNCTION(BlueprintCallable)
    void Disconnect();
    
};

