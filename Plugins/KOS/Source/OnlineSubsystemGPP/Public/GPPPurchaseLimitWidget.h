#pragma once
#include "CoreMinimal.h"
#include "GPPBaseScreen.h"
#include "GPPPurchaseLimitWidgetInterface.h"
#include "GPPPurchaseLimitWidget.generated.h"

class UGPPPurchaseLimitButtonItemWidget;
class UGPPPurchaseLimitRadioButtonItemWidget;
class UGPPPurchaseLimitWidgetObject;
class UTextBlock;
class UUniformGridPanel;
class UVerticalBox;

UCLASS(EditInlineNew)
class ONLINESUBSYSTEMGPP_API UGPPPurchaseLimitWidget : public UGPPBaseScreen, public IGPPPurchaseLimitWidgetInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    TArray<UGPPPurchaseLimitButtonItemWidget*> ButtonWidgetList;
    
    UPROPERTY(Instanced)
    UTextBlock* T_Title;
    
    UPROPERTY(Instanced)
    UTextBlock* T_Description;
    
    UPROPERTY(Instanced)
    UVerticalBox* VB_RadioButtonList;
    
    UPROPERTY(Instanced)
    UUniformGridPanel* GP_ButtonList;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UGPPPurchaseLimitRadioButtonItemWidget> PurchaseLimitRadioButtonItemWidget;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UGPPPurchaseLimitButtonItemWidget> PurchaseLimitPrimaryButtonItemWidget;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UGPPPurchaseLimitButtonItemWidget> PurchaseLimitNormalButtonItemWidget;
    
    UPROPERTY()
    UGPPPurchaseLimitWidgetObject* PurchaseLimitWidgetObject;
    
public:
    UGPPPurchaseLimitWidget();


    // Fix for true pure virtual functions not being implemented
};

