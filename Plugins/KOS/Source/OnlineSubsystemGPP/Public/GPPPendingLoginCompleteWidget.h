#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GPPPendingLoginCompleteWidgetInterface.h"
#include "GPPPendingLoginCompleteWidget.generated.h"

class UAccelByteQrImage;
class UButton;
class UGPPMenuBtnWidget;
class UGPPPendingLoginCompleteWidgetObject;
class URichTextBlock;
class UTextBlock;
class UWidgetSwitcher;

UCLASS(Abstract, EditInlineNew)
class ONLINESUBSYSTEMGPP_API UGPPPendingLoginCompleteWidget : public UUserWidget, public IGPPPendingLoginCompleteWidgetInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced, Transient)
    UAccelByteQrImage* W_QRCodeURL;
    
    UPROPERTY(Instanced, Transient)
    UTextBlock* TextBlock_Code;
    
    UPROPERTY(Instanced, Transient)
    UAccelByteQrImage* W_AccountCheckerQRCodeURL;
    
    UPROPERTY(Instanced, Transient)
    URichTextBlock* RT_Header;
    
    UPROPERTY(Instanced, Transient)
    UTextBlock* TextBlock_CheckAccountHeader;
    
    UPROPERTY(Instanced, Transient)
    URichTextBlock* RT_Contents;
    
    UPROPERTY(Instanced, Transient)
    UTextBlock* TextBlock_RemainTime;
    
    UPROPERTY(Instanced, Transient)
    UButton* Button_HyperLink;
    
    UPROPERTY(Instanced, Transient)
    UGPPMenuBtnWidget* Button_AccountChecker;
    
    UPROPERTY(Instanced, Transient)
    UTextBlock* TextBlock_HyperLink;
    
    UPROPERTY(Instanced, Transient)
    UGPPMenuBtnWidget* Button_Close;
    
    UPROPERTY(Instanced, Transient)
    UGPPMenuBtnWidget* Button_Connect;
    
    UPROPERTY(Instanced, Transient)
    UWidgetSwitcher* WidgetSwitcher_Main;
    
    UPROPERTY(Instanced, Transient)
    UGPPMenuBtnWidget* Button_Cancel;
    
    UPROPERTY(Instanced, Transient)
    UButton* Button_HeadlessCheckEligibilityClose;
    
    UPROPERTY(Instanced, Transient)
    UGPPMenuBtnWidget* Button_HeadlessCheckEligibility;
    
    UPROPERTY(Instanced, Transient)
    UAccelByteQrImage* W_HeadlessCheckEligibilityQRCodeURL;
    
    UPROPERTY(Instanced, Transient)
    UTextBlock* TextBlock_HeadlessCheckEligibilityTitle;
    
    UPROPERTY(Instanced, Transient)
    UTextBlock* TextBlock_HeadlessCheckEligibilityContent;
    
    UPROPERTY(Instanced, Transient)
    UTextBlock* TextBlock_HeadlessCheckEligibilityWarning;
    
    UPROPERTY(Instanced, Transient)
    UTextBlock* TextBlock_HeadlessCheckEligibilityAlert;
    
private:
    UPROPERTY()
    UGPPPendingLoginCompleteWidgetObject* PendingLoginCompleteWidgetObject;
    
public:
    UGPPPendingLoginCompleteWidget();

protected:
    UFUNCTION()
    void OnClickButton_HyperLink();
    
    UFUNCTION()
    void OnClickButton_HeadlessCheckEligibilityClose();
    
    UFUNCTION()
    void OnClickButton_HeadlessCheckEligibilityChecker(bool bIsSelected);
    
    UFUNCTION()
    void OnClickButton_ConnectHandle(bool bIsSelected);
    
    UFUNCTION()
    void OnClickButton_Close(bool bIsSelected);
    
    UFUNCTION()
    void OnClickButton_Cancel(bool bIsSelected);
    
    UFUNCTION()
    void OnClickButton_AccountChecker(bool bIsSelected);
    

    // Fix for true pure virtual functions not being implemented
};

