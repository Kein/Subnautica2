#include "GPPPendingLoginCompleteConsoleWidget.h"

UGPPPendingLoginCompleteConsoleWidget::UGPPPendingLoginCompleteConsoleWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->WidgetSwitcher_Main = NULL;
    this->W_QRCodeURL = NULL;
    this->W_AccountCheckerQRCodeURL = NULL;
    this->TextBlock_Code = NULL;
    this->TextBlock_CheckAccountHeader = NULL;
    this->RT_Header = NULL;
    this->RT_Contents = NULL;
    this->TextBlock_RemainTime = NULL;
    this->SB_ScrollBox = NULL;
    this->SB_ScrollBox_CheckAccount = NULL;
    this->W_KeyGuide = NULL;
    this->W_AccountCheckerKeyGuide = NULL;
    this->PendingLoginCompleteWidgetObject = NULL;
    this->InputController = NULL;
}


