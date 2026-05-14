#include "GPPRepayDlgWidget.h"

UGPPRepayDlgWidget::UGPPRepayDlgWidget() {
    this->bRepayError = false;
    this->SB_Screen = NULL;
    this->SB_Dlg = NULL;
    this->SB_Landscape = NULL;
    this->SB_LandscapeTitle = NULL;
    this->SB_LandscapeDescription = NULL;
    this->SB_LandscapeDescriptionList = NULL;
    this->SB_LandscapeButtonList = NULL;
    this->SB_LandscapeRepayInfo = NULL;
    this->SB_LandscapeMainButton = NULL;
    this->SB_Portrait = NULL;
    this->SB_PortraitTitle = NULL;
    this->SB_PortraitDescription = NULL;
    this->SB_PortraitDescriptionList = NULL;
    this->SB_PortraitButtonList = NULL;
    this->SB_PortraitRepayInfo = NULL;
    this->SB_PortraitMainButton = NULL;
    this->VB_Buttons = NULL;
    this->Btn_SupportButton = NULL;
    this->Btn_SubButton = NULL;
    this->W_RepayList = NULL;
    this->W_RepayError = NULL;
    this->Btn_MainButton = NULL;
    this->TB_Title = NULL;
    this->TB_Text1 = NULL;
    this->TB_Text2 = NULL;
    this->RepayWidgetObject = NULL;
}

void UGPPRepayDlgWidget::OnClickedSupportBtn(bool Selected) {
}

void UGPPRepayDlgWidget::OnClickedSubBtn(bool Selected) {
}

void UGPPRepayDlgWidget::OnClickedMainBtn(bool Selected) {
}


