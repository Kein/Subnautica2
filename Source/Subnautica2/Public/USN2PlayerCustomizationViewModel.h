#pragma once
#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "EUWEPlayerCustomizationPartType.h"
#include "UWEPlayerCustomizationSet.h"
#include "SN2CustomizationItemViewModelArray.h"
#include "USN2PlayerCustomizationViewModel.generated.h"

class USN2CustomizationItemViewModel;
class UTexture2D;
class UUWEPlayerCustomizationItemDA;

UCLASS()
class SUBNAUTICA2_API UUSN2PlayerCustomizationViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPaperDollImageChanged);
    
    UPROPERTY(BlueprintAssignable)
    FOnPaperDollImageChanged OnPaperDollImageChanged;
    
protected:
    UPROPERTY(EditAnywhere)
    FUWEPlayerCustomizationSet CustomizationSet;
    
    UPROPERTY(BlueprintReadOnly)
    TMap<EUWEPlayerCustomizationPartType, FSN2CustomizationItemViewModelArray> CustomizationItemsCache;
    
    UPROPERTY(BlueprintReadOnly)
    TSoftObjectPtr<UTexture2D> PaperDollImage;
    
public:
    UUSN2PlayerCustomizationViewModel();

    UFUNCTION(BlueprintCallable)
    TMap<EUWEPlayerCustomizationPartType, FSN2CustomizationItemViewModelArray> GetEquippableCustomizationItemsForCharacter();
    
    UFUNCTION(BlueprintPure)
    USN2CustomizationItemViewModel* GetCurrentlySelectedPart(EUWEPlayerCustomizationPartType PartType);
    
    UFUNCTION(BlueprintCallable)
    void ConfirmCustomization();
    
    UFUNCTION(BlueprintCallable)
    void ClearCustomization();
    
    UFUNCTION(BlueprintCallable)
    void ApplyCustomizationItem(UUWEPlayerCustomizationItemDA* Item);
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

