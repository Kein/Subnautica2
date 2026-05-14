#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "UWEActorDataAsset.h"
#include "EPickupDestination.h"
#include "UWEEquipmentAttachmentRules.h"
#include "UWEFabricationPreviewMeshData.h"
#include "UWEItemAnimation.h"
#include "UWEItemType.generated.h"

class AActor;
class AUWEBaseItem;
class UGameplayAbility;
class UGameplayEffect;
class UMaterialInstance;
class UTexture2D;
class UUWEItemType;
class UUWEStoryGoal;

UCLASS(EditInlineNew)
class UWEINVENTORY_API UUWEItemType : public UUWEActorDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag TypeTag;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<AActor> ActorClass;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<AUWEBaseItem> HeldActorClass;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, EditDefaultsOnly)
    UUWEItemType* DefaultAttachment;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, EditDefaultsOnly)
    FText Name;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UTexture2D> Thumbnail;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, EditDefaultsOnly)
    FText ItemDescription;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UMaterialInstance> FabricationPreviewMaterialInstance;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, EditDefaultsOnly)
    EPickupDestination PickupDestination;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bReequipSameTypeOnRemove;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag EquipmentSlot;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FUWEEquipmentAttachmentRules AttachmentRules;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, EditAnywhere)
    TArray<TSoftClassPtr<UGameplayAbility>> Abilities;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTagContainer RequiredTagsToDrop;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTagContainer BlockingTagsToDrop;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTagContainer RequiredTagsToUse;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, EditDefaultsOnly)
    TMap<FGameplayTag, FText> PlayerMissingTagWarnings;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, EditDefaultsOnly)
    FText RequiredUseTagsNotMetErrorText;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTagContainer CapturedAttributes;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, EditDefaultsOnly)
    TArray<TSoftClassPtr<UGameplayEffect>> ConsumeEffects;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTagContainer GameplayTags;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, EditDefaultsOnly)
    TMap<FGameplayTag, float> TunableData;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag PickupCueTag;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag DropCueTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag EquipCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag FirstEquipCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag UnequipCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag HolsterCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag FailedActivationCue;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, EditDefaultsOnly)
    TArray<UUWEStoryGoal*> ItemAcquisitionStoryGoalsRef;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, EditDefaultsOnly)
    TArray<UUWEStoryGoal*> EquippedStoryGoals;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, EditDefaultsOnly)
    FUWEItemAnimation ItemAnimation;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, EditDefaultsOnly)
    FUWEFabricationPreviewMeshData FabricationPreviewMeshData;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, EditDefaultsOnly)
    bool bEnergyTool;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, EditDefaultsOnly)
    bool bShowNameWhenHovered;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, EditDefaultsOnly)
    bool bUseFromInventory;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, EditDefaultsOnly)
    bool bInvisibleInFirstPerson;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, EditDefaultsOnly)
    bool bTool;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, EditDefaultsOnly)
    bool bIsTwoHanded;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, EditDefaultsOnly)
    bool bHideTunableDataInConsumableInfo;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, EditDefaultsOnly)
    bool bNonSingleton;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FTransform CarryableAttachmentTransform;
    
    UUWEItemType();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void PreloadItemAnimBlueprintClass() const;
    
    UFUNCTION(BlueprintPure)
    bool IsEquippment() const;
    
    UFUNCTION(BlueprintPure)
    bool IsEquippable() const;
    
    UFUNCTION(BlueprintPure)
    void GetTunableData(FGameplayTag Tag, float& Value, bool& bFound) const;
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetThumbnailFromAttributeMap(TMap<FGameplayTag, FString> Map);
    
    UFUNCTION(BlueprintPure)
    FUWEFabricationPreviewMeshData GetPreviewMeshData() const;
    
    UFUNCTION(BlueprintPure)
    UClass* GetItemAnimEquippedAnimBlueprintClass() const;
    
    UFUNCTION(BlueprintPure)
    UClass* GetHeldActorClassLoaded() const;
    
    UFUNCTION(BlueprintPure)
    TMap<FGameplayTag, FString> GetDefaultCapturedAttributes();
    
};

