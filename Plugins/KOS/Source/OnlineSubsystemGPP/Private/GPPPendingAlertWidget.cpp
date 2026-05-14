#include "GPPPendingAlertWidget.h"

UGPPPendingAlertWidget::UGPPPendingAlertWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->WidgetSwitcher_ButtonContent = NULL;
    this->TextBlock_Title = NULL;
    this->TextBlock_Subtitle = NULL;
    this->TextBlock_Description = NULL;
    this->Button_ForOneButtonClose = NULL;
    this->Button_ForTwoButtonLeft = NULL;
    this->Button_ForTwoButtonRight = NULL;
    this->SizeBox_Error = NULL;
    this->AlertWidgetObject = NULL;
}

void UGPPPendingAlertWidget::OnClickButton_ForTwoButtonRight(bool bIsSelect) {
}

void UGPPPendingAlertWidget::OnClickButton_ForTwoButtonLeft(bool bIsSelect) {
}

void UGPPPendingAlertWidget::OnClickButton_ForOneButtonClose(bool bIsSelect) {
}


