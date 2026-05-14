#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UWEDataAssetInfoInterface.h"
#include "UWEPrimaryDataAssetBase.h"
#include "EUnlockState.h"
#include "UWEUnlockNotificationPackage.h"
#include "UWEUnlockableAsset.h"
#include "EUWEBioAbilityType.h"
#include "Templates/SubclassOf.h"
#include "UWEBioAbilityDataUnlockCost.h"
#include "UWEBioAbilityData.generated.h"

class AActor;
class APlayerState;
class UGameplayAbility;
class UObject;
class UTexture2D;
class UUWEBioAbilityData;
class UUWEBioScanData;
class UUWEDialogueStoryEvent;

UCLASS(Config=Game)
class UWEBIOMODS_API UUWEBioAbilityData : public UUWEPrimaryDataAssetBase, public IUWEDataAssetInfoInterface, public IUWEUnlockableAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSoftObjectPtr<UTexture2D> Icon;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSoftClassPtr<UGameplayAbility> BioAbility;
    
    UPROPERTY(AssetRegistrySearchable, VisibleAnywhere)
    FGameplayTag AbilityTag;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    TSoftObjectPtr<UUWEDialogueStoryEvent> UnlockDialogue;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    EUWEBioAbilityType BioAbilityType;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<UUWEBioScanData*> RequiredBioScans;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FUWEBioAbilityDataUnlockCost UnlockCost;
    
    UUWEBioAbilityData();

    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    bool IsUnlocked(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    bool IsCrafted(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    bool IsActiveBioAbility() const;
    
    UFUNCTION(BlueprintPure)
    EUnlockState GetUnlockState(APlayerState* PlayerState);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    TArray<UUWEBioScanData*> GetUnlockedRequiredBioScans(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    TArray<UUWEBioScanData*> GetMissingRequiredBioScans(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static UUWEBioAbilityData* GetBioAbilityDataFromAbilityTag(FGameplayTag Tag);
    
    UFUNCTION(BlueprintPure)
    static UUWEBioAbilityData* GetBioAbilityDataFromAbility(const TSubclassOf<UGameplayAbility> AbilityClass);
    
    UFUNCTION(BlueprintPure)
    static TArray<UGameplayAbility*> GetBioAbilitiesForActor(const AActor* Actor);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<UUWEBioAbilityData*> GetAllBioAbilityData(bool bOnlyUnlocked, UObject* WorldContextObject);
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    FUWEUnlockNotificationPackage GetNotificationPackage() override PURE_VIRTUAL(GetNotificationPackage, return FUWEUnlockNotificationPackage{};);
    
};

