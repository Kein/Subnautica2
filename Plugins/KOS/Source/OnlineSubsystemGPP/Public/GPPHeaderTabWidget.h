#pragma once
#include "CoreMinimal.h"
#include "GPPBaseScreen.h"
#include "GPPHeaderTabWidget.generated.h"

class UGPPMenuBtnWidget;
class UImage;

UCLASS(EditInlineNew)
class UGPPHeaderTabWidget : public UGPPBaseScreen {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText Text;
    
private:
    UPROPERTY(Instanced)
    UGPPMenuBtnWidget* GPPMenuBtnWidget;
    
    UPROPERTY(Instanced)
    UImage* Img_Select;
    
public:
    UGPPHeaderTabWidget();

private:
    UFUNCTION()
    void OnClicked_GPPMenuBtnWidget(bool bSelected);
    
};

