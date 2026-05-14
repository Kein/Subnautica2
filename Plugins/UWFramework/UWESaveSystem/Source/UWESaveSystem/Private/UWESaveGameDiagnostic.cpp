#include "UWESaveGameDiagnostic.h"

UUWESaveGameDiagnostic::UUWESaveGameDiagnostic(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SelectedTab = NULL;
    this->ExistingSavesTab = NULL;
    this->ActiveSaveContentsTab = NULL;
}

void UUWESaveGameDiagnostic::OnSaveCompleted(bool Result) {
}


