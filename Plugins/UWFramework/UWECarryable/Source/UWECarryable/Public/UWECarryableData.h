#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "UWEActorDataAsset.h"
#include "UWECarryableData.generated.h"

class AActor;
class UGameplayAbility;
class UUWECarryableData;

UCLASS(EditInlineNew)
class UWECARRYABLE_API UUWECarryableData : public UUWEActorDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag CarryableTag;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag CarryCueTag;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag DropCueTag;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag AttachHardPointCueTag;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag DetachHardPointCueTag;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSoftClassPtr<UGameplayAbility>> GrantedAbilities;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FTransform CarryableAttachmentTransform;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FTransform HeldCarryableAttachmentTransform;
    
    UUWECarryableData();

    UFUNCTION(BlueprintPure)
    static UUWECarryableData* GetCarryableDataForActor(const AActor* Actor);
    
};

