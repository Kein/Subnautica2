#include "GPPPendingAlertConsoleWidget.h"

UGPPPendingAlertConsoleWidget::UGPPPendingAlertConsoleWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->TextBlock_Subtitle = NULL;
    this->TextBlock_Description = NULL;
    this->SB_Loading = NULL;
    this->SB_Error = NULL;
    this->SB_ScrollBox = NULL;
    this->W_KeyGuide = NULL;
    this->AlertWidgetObject = NULL;
    this->InputController = NULL;
}


