#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GPPMaintenanceWidgetInterface.h"
#include "GPPWidgetInterface_Exec_Close.h"
#include "GPPWidgetInterface_Exec_OpenDetail.h"
#include "GPPWidgetInterface_Exec_ScrollMove.h"
#include "Templates/SubclassOf.h"
#include "GPPMaintenanceConsoleWidget.generated.h"

class UGPPKeyGuideFooterWidget;
class UGPPMaintenanceWidgetObject;
class UGPPWidgetInputController;
class UScrollBox;
class USizeBox;
class UTextBlock;

UCLASS(EditInlineNew)
class ONLINESUBSYSTEMGPP_API UGPPMaintenanceConsoleWidget : public UUserWidget, public IGPPMaintenanceWidgetInterface, public IGPPWidgetInterface_Exec_Close, public IGPPWidgetInterface_Exec_OpenDetail, public IGPPWidgetInterface_Exec_ScrollMove {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UTextBlock* T_Title;
    
    UPROPERTY(Instanced)
    UTextBlock* T_Duration;
    
    UPROPERTY(Instanced)
    UTextBlock* T_Desc;
    
    UPROPERTY(Instanced)
    USizeBox* SB_Desc;
    
    UPROPERTY(Instanced)
    UScrollBox* SB_ScrollBox;
    
    UPROPERTY(Instanced)
    UGPPKeyGuideFooterWidget* W_KeyGuide;
    
    UPROPERTY()
    UGPPMaintenanceWidgetObject* MaintenanceWidgetObject;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGPPWidgetInputController> InputController;
    
public:
    UGPPMaintenanceConsoleWidget();

private:
    UFUNCTION()
    void OnClickBtn_ShowDetail(bool bEnable);
    
    UFUNCTION()
    void OnClickBtn_CopyDeviceId(bool bEnable);
    
    UFUNCTION()
    void OnClickBtn_Confirm(bool bEnable);
    

    // Fix for true pure virtual functions not being implemented
};

