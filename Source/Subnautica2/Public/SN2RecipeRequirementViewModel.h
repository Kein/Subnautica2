#pragma once
#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "UWEEventKey.h"
#include "SN2RecipeRequirementViewModel.generated.h"

class UTexture2D;
class UUWEBioScanData;
class UUWEItemType;

UCLASS()
class SUBNAUTICA2_API USN2RecipeRequirementViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAssetUnlockRequirementsMet);
    
protected:
    UPROPERTY()
    UUWEItemType* ItemType;
    
    UPROPERTY()
    UUWEBioScanData* BioScanData;
    
    UPROPERTY(BlueprintReadOnly)
    FText ItemName;
    
    UPROPERTY(BlueprintReadOnly)
    int32 NumRequired;
    
    UPROPERTY(BlueprintReadOnly)
    int32 NumAvailable;
    
    UPROPERTY(BlueprintReadOnly)
    bool bShowNumAvailableCount;
    
    UPROPERTY(BlueprintReadOnly)
    TSoftObjectPtr<UTexture2D> Thumbnail;
    
public:
    USN2RecipeRequirementViewModel();

protected:
    UFUNCTION()
    void OnAssetUnlocked(FUWEEventKey EventKey, int32 OldValue, int32 NewValue);
    
public:
    UFUNCTION(BlueprintCallable)
    bool CheckItemNameSubstringExceedsCharacterLimit(int32 CharacterLimit);
    
};

