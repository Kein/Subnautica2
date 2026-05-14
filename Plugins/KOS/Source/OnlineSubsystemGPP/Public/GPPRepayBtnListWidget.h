#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GPPRepayBtnInfo.h"
#include "GPPRepayBtnListWidget.generated.h"

class UGPPRepayBtnWidget;
class UScrollBox;
class USpacer;
class UTextBlock;

UCLASS(EditInlineNew)
class ONLINESUBSYSTEMGPP_API UGPPRepayBtnListWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UTextBlock* TB_TotalCount;
    
    UPROPERTY(Instanced)
    UScrollBox* SB_ScrollBox;
    
    UPROPERTY(Instanced)
    TArray<UGPPRepayBtnWidget*> RepayBtnList;
    
    UPROPERTY(Instanced)
    TArray<USpacer*> SpacerList;
    
    UPROPERTY(Instanced)
    UTextBlock* TB_RepaidCount;
    
    UPROPERTY(EditAnywhere)
    float BtnToRepaidCountSpacerHeight;
    
    UPROPERTY(EditAnywhere)
    float RepaidCountToBtnSpacerHeight;
    
    UPROPERTY(EditAnywhere)
    float BtnSpacerHeight;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UGPPRepayBtnWidget> RepayBtnWidgetClass;
    
    UPROPERTY(EditAnywhere)
    TArray<FGPPRepayBtnInfo> RepayBtnInfoList;
    
    UPROPERTY(EditAnywhere)
    TArray<FGPPRepayBtnInfo> RepaidBtnInfoList;
    
public:
    UGPPRepayBtnListWidget();

protected:
    UFUNCTION()
    void OnClickBtn_RepayBtn(UGPPRepayBtnWidget* RepayBtnWidget);
    
};

