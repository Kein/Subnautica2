#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilitySpecHandle.h"
#include "MVVMViewModelBase.h"
#include "UWEBiomodHUDViewModel.generated.h"

class UGameplayAbility;
class UObject;
class UUWEAbilitySystemComponent;
class UUWEBioAbilityViewModel;
class UUWEBiomodHUDViewModel;

UCLASS()
class UWEBIOMODS_API UUWEBiomodHUDViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TArray<UUWEBioAbilityViewModel*> AbilityViewModels;
    
    UPROPERTY(BlueprintReadOnly)
    bool bLatestDisplayBiomodActiveState;
    
private:
    UPROPERTY()
    UObject* WorldContextObject;
    
public:
    UUWEBiomodHUDViewModel();

    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContext"))
    static UUWEBiomodHUDViewModel* TryGetBiomodHUDViewModel(UObject* WorldContext);
    
private:
    UFUNCTION()
    void OnLocalClientReady();
    
    UFUNCTION()
    void OnAbilityRemoved(const UUWEAbilitySystemComponent* ASC, const FGameplayAbilitySpecHandle& AbilitySpecHandle);
    
    UFUNCTION()
    void OnAbilityGiven(const UUWEAbilitySystemComponent* ASC, const FGameplayAbilitySpecHandle& AbilitySpecHandle);
    
    UFUNCTION()
    void OnAbilityEnded(UGameplayAbility* GameplayAbility);
    
    UFUNCTION()
    void OnAbilityCommit(UGameplayAbility* GameplayAbility);
    
    UFUNCTION()
    void OnAbilityActivated(UGameplayAbility* GameplayAbility);
    
    UFUNCTION()
    UUWEBioAbilityViewModel* GetViewModelForAbility(const UGameplayAbility* GameplayAbility) const;
    
public:
    UFUNCTION(BlueprintCallable)
    void DisplayBiomodActiveState(UGameplayAbility* GameplayAbility, bool bIsActive);
    
};

