#include "GPPBaseBtnWidget.h"

UGPPBaseBtnWidget::UGPPBaseBtnWidget() {
    this->Btn_Button = NULL;
    this->CurStateFlags = EGPPBtnStateFlags::Enabled;
    this->bNeedFocusForKeyInteraction = true;
    this->MinimumClickRepetitionTime = 0.15f;
}

void UGPPBaseBtnWidget::UnlockClick() {
}

void UGPPBaseBtnWidget::OnUnHovered() {
}

void UGPPBaseBtnWidget::OnReleased() {
}

void UGPPBaseBtnWidget::OnPressed() {
}

void UGPPBaseBtnWidget::OnHovered() {
}

void UGPPBaseBtnWidget::OnClicked() {
}

bool UGPPBaseBtnWidget::GetEnable() const {
    return false;
}


