#include "GPPToastMessageWidget.h"

UGPPToastMessageWidget::UGPPToastMessageWidget() {
    this->DestroyWidgetAnim = NULL;
    this->DestroyFirstDelay = 2.00f;
    this->FastDestroyAnimPlayRate = 2.50f;
    this->VerticalAlign = VAlign_Fill;
    this->HorizontalAlign = HAlign_Fill;
    this->RootComp = NULL;
    this->T_Title = NULL;
    this->RootContent = NULL;
    this->T_Content = NULL;
    this->Img_TitleBulletIcon = NULL;
    this->Btn_Close = NULL;
    this->ToastMessageWidgetObject = NULL;
}

void UGPPToastMessageWidget::OnCloseWidget() {
}

void UGPPToastMessageWidget::OnClickBtn_Close(bool bEnable) {
}

void UGPPToastMessageWidget::DestroyToastMessageWidget() {
}


