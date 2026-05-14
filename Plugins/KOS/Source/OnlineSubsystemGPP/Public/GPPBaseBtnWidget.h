#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "Styling/SlateBrush.h"
#include "EGPPBtnStateFlags.h"
#include "GPPBaseScreen.h"
#include "GPPBaseBtnWidget.generated.h"

class UGPPButton;

UCLASS(EditInlineNew)
class ONLINESUBSYSTEMGPP_API UGPPBaseBtnWidget : public UGPPBaseScreen {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnUpdateWidget);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSelectGPPMenuBtn, bool, bSelected);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnClickedGPPMenuBtn, bool, Selected);
    
    UPROPERTY(BlueprintAssignable)
    FOnClickedGPPMenuBtn OnClickedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnUpdateWidget OnUpdateWidgetDelegate;
    
private:
    UPROPERTY(Instanced)
    UGPPButton* Btn_Button;
    
    UPROPERTY(EditAnywhere)
    FSlateBrush BtnBrush;
    
    UPROPERTY(EditAnywhere)
    EGPPBtnStateFlags CurStateFlags;
    
    UPROPERTY(EditAnywhere)
    bool bNeedFocusForKeyInteraction;
    
    UPROPERTY(EditAnywhere)
    TArray<FKey> KeyBindingList;
    
    UPROPERTY(EditAnywhere)
    float MinimumClickRepetitionTime;
    
public:
    UGPPBaseBtnWidget();

protected:
    UFUNCTION()
    void UnlockClick();
    
    UFUNCTION()
    void OnUnHovered();
    
    UFUNCTION()
    void OnReleased();
    
    UFUNCTION()
    void OnPressed();
    
    UFUNCTION()
    void OnHovered();
    
    UFUNCTION()
    void OnClicked();
    
public:
    UFUNCTION(BlueprintPure)
    bool GetEnable() const;
    
};

