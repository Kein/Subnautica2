#include "UWETermsOfServiceViewModel.h"

UUWETermsOfServiceViewModel::UUWETermsOfServiceViewModel() {
    this->FallbackLocale = TEXT("en");
    this->LegalTextVersionRegex = TEXT("<version>(\\d+)</version>");
    this->LegalTextExtension = TEXT(".txt");
    this->TOSFilename = TEXT("TermsOfService");
    this->PrivacyPolicyFilename = TEXT("PrivacyPolicy");
    this->TOSFolder = TEXT("/Legal/TermsOfService");
    this->PrivacyPolicyFolder = TEXT("/Legal/PrivacyPolicy");
}

void UUWETermsOfServiceViewModel::OnLegalTextAccepted() {
}

bool UUWETermsOfServiceViewModel::NeedsToAcceptLegalText() const {
    return false;
}

void UUWETermsOfServiceViewModel::Initialize() {
}


