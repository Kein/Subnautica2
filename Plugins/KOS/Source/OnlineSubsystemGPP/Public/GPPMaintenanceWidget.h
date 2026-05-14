#pragma once
#include "CoreMinimal.h"
#include "GPPBaseScreen.h"
#include "GPPMaintenanceWidgetInterface.h"
#include "GPPMaintenanceWidget.generated.h"

class UGPPMaintenanceWidgetObject;
class UGPPMenuBtnWidget;
class USizeBox;
class UTextBlock;

UCLASS(EditInlineNew)
class ONLINESUBSYSTEMGPP_API UGPPMaintenanceWidget : public UGPPBaseScreen, public IGPPMaintenanceWidgetInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UGPPMenuBtnWidget* Btn_CopyDeviceId;
    
    UPROPERTY(Instanced)
    UTextBlock* T_Title;
    
    UPROPERTY(Instanced)
    UTextBlock* T_Duration;
    
    UPROPERTY(Instanced)
    UGPPMenuBtnWidget* Btn_ShowDetail;
    
    UPROPERTY(Instanced)
    USizeBox* SizeBox_Desc;
    
    UPROPERTY(Instanced)
    UTextBlock* T_Desc;
    
    UPROPERTY(Instanced)
    UGPPMenuBtnWidget* Btn_Confirm;
    
    UPROPERTY(Instanced)
    USizeBox* SizeBox_ShowDetail;
    
    UPROPERTY()
    UGPPMaintenanceWidgetObject* MaintenanceWidgetObject;
    
public:
    UGPPMaintenanceWidget();

private:
    UFUNCTION()
    void OnClickBtn_ShowDetail(bool bEnable);
    
    UFUNCTION()
    void OnClickBtn_CopyDeviceId(bool bEnable);
    
    UFUNCTION()
    void OnClickBtn_Confirm(bool bEnable);
    

    // Fix for true pure virtual functions not being implemented
};

