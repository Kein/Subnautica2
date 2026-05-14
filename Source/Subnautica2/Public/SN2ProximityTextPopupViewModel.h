#pragma once
#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "SN2ProximityTextPopupViewModel.generated.h"

class UObject;
class USN2AxumGlyphViewModel;
class USN2ProximityTextPopup;
class USN2ProximityTextPopupViewModel;

UCLASS()
class SUBNAUTICA2_API USN2ProximityTextPopupViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    USN2ProximityTextPopup* Popup;
    
    UPROPERTY(BlueprintReadOnly)
    bool Hovered;
    
    UPROPERTY(BlueprintReadOnly)
    bool Popped;
    
    UPROPERTY(BlueprintReadOnly)
    FText PopupText;
    
    UPROPERTY(BlueprintReadOnly)
    bool bTranslationFailed;
    
    UPROPERTY(BlueprintReadOnly)
    bool bRequiresTranslation;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<USN2AxumGlyphViewModel*> RequiredGlyphs;
    
public:
    USN2ProximityTextPopupViewModel();

private:
    UFUNCTION()
    void RefreshText();
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static USN2ProximityTextPopupViewModel* Get(UObject* WorldContext);
    
};

