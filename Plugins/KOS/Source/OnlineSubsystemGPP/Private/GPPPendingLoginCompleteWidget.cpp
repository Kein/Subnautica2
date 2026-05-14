#include "GPPPendingLoginCompleteWidget.h"

UGPPPendingLoginCompleteWidget::UGPPPendingLoginCompleteWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->W_QRCodeURL = NULL;
    this->TextBlock_Code = NULL;
    this->W_AccountCheckerQRCodeURL = NULL;
    this->RT_Header = NULL;
    this->TextBlock_CheckAccountHeader = NULL;
    this->RT_Contents = NULL;
    this->TextBlock_RemainTime = NULL;
    this->Button_HyperLink = NULL;
    this->Button_AccountChecker = NULL;
    this->TextBlock_HyperLink = NULL;
    this->Button_Close = NULL;
    this->Button_Connect = NULL;
    this->WidgetSwitcher_Main = NULL;
    this->Button_Cancel = NULL;
    this->Button_HeadlessCheckEligibilityClose = NULL;
    this->Button_HeadlessCheckEligibility = NULL;
    this->W_HeadlessCheckEligibilityQRCodeURL = NULL;
    this->TextBlock_HeadlessCheckEligibilityTitle = NULL;
    this->TextBlock_HeadlessCheckEligibilityContent = NULL;
    this->TextBlock_HeadlessCheckEligibilityWarning = NULL;
    this->TextBlock_HeadlessCheckEligibilityAlert = NULL;
    this->PendingLoginCompleteWidgetObject = NULL;
}

void UGPPPendingLoginCompleteWidget::OnClickButton_HyperLink() {
}

void UGPPPendingLoginCompleteWidget::OnClickButton_HeadlessCheckEligibilityClose() {
}

void UGPPPendingLoginCompleteWidget::OnClickButton_HeadlessCheckEligibilityChecker(bool bIsSelected) {
}

void UGPPPendingLoginCompleteWidget::OnClickButton_ConnectHandle(bool bIsSelected) {
}

void UGPPPendingLoginCompleteWidget::OnClickButton_Close(bool bIsSelected) {
}

void UGPPPendingLoginCompleteWidget::OnClickButton_Cancel(bool bIsSelected) {
}

void UGPPPendingLoginCompleteWidget::OnClickButton_AccountChecker(bool bIsSelected) {
}


