#include "GPPRepayBtnListWidget.h"

UGPPRepayBtnListWidget::UGPPRepayBtnListWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->TB_TotalCount = NULL;
    this->SB_ScrollBox = NULL;
    this->TB_RepaidCount = NULL;
    this->BtnToRepaidCountSpacerHeight = 40.00f;
    this->RepaidCountToBtnSpacerHeight = 30.00f;
    this->BtnSpacerHeight = 30.00f;
}

void UGPPRepayBtnListWidget::OnClickBtn_RepayBtn(UGPPRepayBtnWidget* RepayBtnWidget) {
}


