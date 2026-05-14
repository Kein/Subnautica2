#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "UWEItemType.h"
#include "UWEAnimMontageSelectionSet.h"
#include "UWEEquippableItemType.generated.h"

class UGameplayAbility;
class UGameplayEffect;
class UUWEStoryGoal;

UCLASS(EditInlineNew)
class UWEEQUIPMENT_API UUWEEquippableItemType : public UUWEItemType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTagContainer EquipmentSlots;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSoftClassPtr<UGameplayAbility>> GrantedAbilities;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSoftClassPtr<UGameplayEffect>> GrantedEffects;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag EquipCueTag;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag UnequipCueTag;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag ThrowCueTag;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float EquippableThrowForceLand;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float EquippableThrowForceWater;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTransform EquippableCameraOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float EquippableCameraFollowLimitMin;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float EquippableCameraFollowLimitMax;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FUWEAnimMontageSelectionSet FirstEquipMontage;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FUWEAnimMontageSelectionSet EquipMontage;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FUWEAnimMontageSelectionSet UnequipMontage;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FUWEAnimMontageSelectionSet PrimaryUseMontage;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FUWEAnimMontageSelectionSet SecondaryUseMontage;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FUWEAnimMontageSelectionSet PrimaryUseEndMontage;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FUWEAnimMontageSelectionSet SecondaryUseEndMontage;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FUWEAnimMontageSelectionSet FirstEquipToolMontage;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FUWEAnimMontageSelectionSet EquipToolMontage;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FUWEAnimMontageSelectionSet UnequipToolMontage;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FUWEAnimMontageSelectionSet PrimaryUseToolMontage;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FUWEAnimMontageSelectionSet SecondaryUseToolMontage;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FUWEAnimMontageSelectionSet PrimaryUseEndToolMontage;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FUWEAnimMontageSelectionSet SecondaryUseEndToolMontage;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<UUWEStoryGoal*> OnEquippedPlayerStoryGoals;
    
    UUWEEquippableItemType();

};

