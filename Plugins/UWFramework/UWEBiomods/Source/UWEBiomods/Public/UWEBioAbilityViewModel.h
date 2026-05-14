#pragma once
#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "EUWEBioAbilityType.h"
#include "UWEBioAbilityCooldownData.h"
#include "UWEBioAbilityViewModel.generated.h"

class AActor;
class AUWEBioLab;
class UGameplayAbility;
class UObject;
class UTexture2D;
class UUWEBioAbilityData;
class UUWEBiomodCrafterInteractionComponent;
class UUWEPrimaryDataAssetBase;

UCLASS()
class UWEBIOMODS_API UUWEBioAbilityViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    UUWEBioAbilityData* AbilityData;
    
    UPROPERTY(BlueprintReadOnly)
    TSoftObjectPtr<UTexture2D> Icon;
    
    UPROPERTY(BlueprintReadOnly)
    FText Name;
    
    UPROPERTY(BlueprintReadOnly)
    FText Description;
    
    UPROPERTY(BlueprintReadOnly)
    EUWEBioAbilityType BioAbilityType;
    
    UPROPERTY(BlueprintReadOnly)
    TSoftClassPtr<UGameplayAbility> BioAbility;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsInstalled;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsCrafted;
    
    UPROPERTY(BlueprintReadOnly)
    bool bShowRequirements;
    
    UPROPERTY(BlueprintReadOnly)
    FUWEBioAbilityCooldownData Cooldown;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsActive;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsPinned;
    
    UPROPERTY(BlueprintReadOnly)
    bool bAvailabilityOverriden;
    
public:
    UUWEBioAbilityViewModel();

    UFUNCTION(BlueprintCallable)
    void UninstallBioAbility();
    
    UFUNCTION(BlueprintCallable)
    void TrySetRecipePinned(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void Setup(UUWEBioAbilityData* InAbilityData, AUWEBioLab* biolab, UUWEBiomodCrafterInteractionComponent* InteractionComponent, AActor* BioAbilityOwner, bool bInIsInstalled, bool bInAvailabilityOverriden);
    
protected:
    UFUNCTION()
    void OnRecipeUnpinned(UUWEPrimaryDataAssetBase* Recipe);
    
    UFUNCTION()
    void OnRecipePinned(UUWEPrimaryDataAssetBase* Recipe);
    
public:
    UFUNCTION(BlueprintCallable)
    void InstallBioAbility();
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    int32 GetRemainingCooldownSeconds(UObject* WorldContextObject) const;
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    float GetCooldownFraction(UObject* WorldContextObject) const;
    
};

