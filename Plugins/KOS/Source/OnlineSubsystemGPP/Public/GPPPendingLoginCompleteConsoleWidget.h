#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GPPPendingLoginCompleteWidgetInterface.h"
#include "GPPWidgetInterface_Exec_Cancel.h"
#include "GPPWidgetInterface_Exec_OpenWebBrowser.h"
#include "GPPWidgetInterface_Exec_ScrollMove.h"
#include "Templates/SubclassOf.h"
#include "GPPPendingLoginCompleteConsoleWidget.generated.h"

class UAccelByteQrImage;
class UGPPKeyGuideFooterWidget;
class UGPPPendingLoginCompleteWidgetObject;
class UGPPWidgetInputController;
class URichTextBlock;
class UScrollBox;
class UTextBlock;
class UWidgetSwitcher;

UCLASS(EditInlineNew)
class ONLINESUBSYSTEMGPP_API UGPPPendingLoginCompleteConsoleWidget : public UUserWidget, public IGPPPendingLoginCompleteWidgetInterface, public IGPPWidgetInterface_Exec_Cancel, public IGPPWidgetInterface_Exec_OpenWebBrowser, public IGPPWidgetInterface_Exec_ScrollMove {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced, Transient)
    UWidgetSwitcher* WidgetSwitcher_Main;
    
    UPROPERTY(Instanced, Transient)
    UAccelByteQrImage* W_QRCodeURL;
    
    UPROPERTY(Instanced, Transient)
    UAccelByteQrImage* W_AccountCheckerQRCodeURL;
    
    UPROPERTY(Instanced, Transient)
    UTextBlock* TextBlock_Code;
    
    UPROPERTY(Instanced, Transient)
    UTextBlock* TextBlock_CheckAccountHeader;
    
    UPROPERTY(Instanced, Transient)
    URichTextBlock* RT_Header;
    
    UPROPERTY(Instanced, Transient)
    URichTextBlock* RT_Contents;
    
    UPROPERTY(Instanced, Transient)
    UTextBlock* TextBlock_RemainTime;
    
    UPROPERTY(Instanced)
    UScrollBox* SB_ScrollBox;
    
    UPROPERTY(Instanced)
    UScrollBox* SB_ScrollBox_CheckAccount;
    
    UPROPERTY(Instanced, Transient)
    UGPPKeyGuideFooterWidget* W_KeyGuide;
    
    UPROPERTY(Instanced, Transient)
    UGPPKeyGuideFooterWidget* W_AccountCheckerKeyGuide;
    
private:
    UPROPERTY()
    UGPPPendingLoginCompleteWidgetObject* PendingLoginCompleteWidgetObject;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGPPWidgetInputController> InputController;
    
public:
    UGPPPendingLoginCompleteConsoleWidget();


    // Fix for true pure virtual functions not being implemented
};

