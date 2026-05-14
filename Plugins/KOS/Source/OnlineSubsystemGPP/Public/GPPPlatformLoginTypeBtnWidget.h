#pragma once
#include "CoreMinimal.h"
#include "EGPPlatformLoginType.h"
#include "GPPBaseScreen.h"
#include "GPPPlatformLoginTypeInfo.h"
#include "GPPPlatformLoginTypeBtnWidget.generated.h"

class UGPPMenuBtnWidget;
class UImage;
class UWidget;

UCLASS(EditInlineNew)
class ONLINESUBSYSTEMGPP_API UGPPPlatformLoginTypeBtnWidget : public UGPPBaseScreen {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnClickedPlatformLoginTypeBtn, EGPPlatformLoginType, LoginType);
    
private:
    UPROPERTY(Instanced)
    UImage* Img;
    
    UPROPERTY(Instanced)
    UGPPMenuBtnWidget* Btn;
    
    UPROPERTY(Instanced)
    UGPPMenuBtnWidget* Btn_Recommended;
    
    UPROPERTY(Instanced)
    UWidget* RecentLoginIndicator;
    
    UPROPERTY(EditAnywhere)
    TArray<FGPPPlatformLoginTypeInfo> LoginTypeInfoList;
    
public:
    UGPPPlatformLoginTypeBtnWidget();

private:
    UFUNCTION()
    void OnClickBtn(bool bSelected);
    
};

