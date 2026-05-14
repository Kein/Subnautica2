#include "GPPMaintenanceConsoleWidget.h"

UGPPMaintenanceConsoleWidget::UGPPMaintenanceConsoleWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->T_Title = NULL;
    this->T_Duration = NULL;
    this->T_Desc = NULL;
    this->SB_Desc = NULL;
    this->SB_ScrollBox = NULL;
    this->W_KeyGuide = NULL;
    this->MaintenanceWidgetObject = NULL;
    this->InputController = NULL;
}

void UGPPMaintenanceConsoleWidget::OnClickBtn_ShowDetail(bool bEnable) {
}

void UGPPMaintenanceConsoleWidget::OnClickBtn_CopyDeviceId(bool bEnable) {
}

void UGPPMaintenanceConsoleWidget::OnClickBtn_Confirm(bool bEnable) {
}


