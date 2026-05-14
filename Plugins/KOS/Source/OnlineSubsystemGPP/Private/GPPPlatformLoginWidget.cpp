#include "GPPPlatformLoginWidget.h"

UGPPPlatformLoginWidget::UGPPPlatformLoginWidget() {
    this->UniformGridPanel_Main = NULL;
    this->Btn_CopyDeviceId = NULL;
    this->LandscapeColumnCount = 2;
    this->DefaultColumnCount = 1;
    this->Btn_Close = NULL;
    this->PlatformLoginWidgetObject = NULL;
}

void UGPPPlatformLoginWidget::OnClickBtn_PlatformButton(EGPPlatformLoginType LoginType) {
}

void UGPPPlatformLoginWidget::OnClickBtn_CopyDeviceId(bool bEnable) {
}

void UGPPPlatformLoginWidget::OnClickBtn_Close(bool bEnable) {
}


