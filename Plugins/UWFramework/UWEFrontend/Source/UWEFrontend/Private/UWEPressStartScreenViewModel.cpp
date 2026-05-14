#include "UWEPressStartScreenViewModel.h"

UUWEPressStartScreenViewModel::UUWEPressStartScreenViewModel() {
    this->ShowUserInfoPanel = false;
    this->bHoldForShaderCompilation = false;
    this->ShaderPrecompilationPercentageComplete = 0.00f;
    this->InitialShaderPrecompiles = 0;
    this->CompletedShaderPrecompiles = 0;
    this->EADisclaimerHeaderText = FText::FromString(TEXT("Subnautica 2 is actively being developed while in Early Access."));
    this->EADisclaimerBodyText = FText::FromString(TEXT("You may encounter bugs and issues while playing. We look forward to your ideas and feedback as we collaborate with you and our community on all our future updates."));
    this->BuildNumber = 0;
    this->IsOnlineAccessRequired = false;
}

void UUWEPressStartScreenViewModel::Initialize(AUWEFrontendPlayerController* FrontendPC) {
}


