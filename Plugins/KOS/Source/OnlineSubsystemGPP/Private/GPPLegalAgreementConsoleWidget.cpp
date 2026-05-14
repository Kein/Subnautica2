#include "GPPLegalAgreementConsoleWidget.h"

UGPPLegalAgreementConsoleWidget::UGPPLegalAgreementConsoleWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->LegalAgreementWidgetObject = NULL;
    this->SB_LegalAgreementListScroll = NULL;
    this->VB_LegalAgreementListItems = NULL;
    this->W_StartButton = NULL;
    this->W_KeyGuide = NULL;
    this->InputController = NULL;
}


