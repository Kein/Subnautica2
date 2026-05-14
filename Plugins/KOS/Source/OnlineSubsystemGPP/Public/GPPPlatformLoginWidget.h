#pragma once
#include "CoreMinimal.h"
#include "EGPPlatformLoginType.h"
#include "GPPBaseScreen.h"
#include "GPPPlatformLoginWidgetInterface.h"
#include "GPPPlatformLoginWidget.generated.h"

class UGPPMenuBtnWidget;
class UGPPPlatformLoginTypeBtnWidget;
class UGPPPlatformLoginWidgetObject;
class UUniformGridPanel;

UCLASS(EditInlineNew)
class ONLINESUBSYSTEMGPP_API UGPPPlatformLoginWidget : public UGPPBaseScreen, public IGPPPlatformLoginWidgetInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced, Transient)
    UUniformGridPanel* UniformGridPanel_Main;
    
    UPROPERTY(Instanced)
    UGPPMenuBtnWidget* Btn_CopyDeviceId;
    
    UPROPERTY(EditAnywhere)
    int32 LandscapeColumnCount;
    
    UPROPERTY(EditAnywhere)
    int32 DefaultColumnCount;
    
    UPROPERTY(Instanced, Transient)
    UGPPMenuBtnWidget* Btn_Close;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UGPPPlatformLoginTypeBtnWidget> PlatformLoginTypeBtn;
    
    UPROPERTY()
    UGPPPlatformLoginWidgetObject* PlatformLoginWidgetObject;
    
public:
    UGPPPlatformLoginWidget();

private:
    UFUNCTION()
    void OnClickBtn_PlatformButton(EGPPlatformLoginType LoginType);
    
    UFUNCTION()
    void OnClickBtn_CopyDeviceId(bool bEnable);
    
    UFUNCTION()
    void OnClickBtn_Close(bool bEnable);
    

    // Fix for true pure virtual functions not being implemented
};

