#include "UWEComputerTextInterfaceComponent.h"
#include "Templates/SubclassOf.h"

UUWEComputerTextInterfaceComponent::UUWEComputerTextInterfaceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TerminalNameText = FText::FromString(TEXT("NoeticAdivsorShell 2.4.1"));
    this->TerminalFirstLineText = FText::FromString(TEXT("Welcome to NOA, the noetic advisor. How may I help you serve today?"));
    this->InteractingActor = NULL;
    this->ViewModel = NULL;
    this->RecentlyClickedDialogueData = NULL;
    this->Widget = NULL;
    this->DistanceTask = NULL;
}

void UUWEComputerTextInterfaceComponent::RemoveRootDialogueOption(UUWEComputerTextInterfaceDialogueData* DialogueData) {
}

void UUWEComputerTextInterfaceComponent::OpenDialogueData(TArray<UUWEComputerTextInterfaceDialogueData*> DialogueDataToOpen) {
}

void UUWEComputerTextInterfaceComponent::OnWidgetPopped(TEnumAsByte<EUWEWindowManagerLayer> LayerId, bool bIsLast, TSubclassOf<UCommonActivatableWidget> Class) {
}

void UUWEComputerTextInterfaceComponent::OnDialogueClicked_Implementation(UUWEComputerTextInterfaceDialogueData* DialogueData) {
}

void UUWEComputerTextInterfaceComponent::OnBackClicked_Implementation() {
}

void UUWEComputerTextInterfaceComponent::InitializeComputerTextInterface(AActor* Actor) {
}

void UUWEComputerTextInterfaceComponent::HandleDialogueClicked(UUWEComputerTextInterfaceDialogueData* ClickedDialogueData) {
}

void UUWEComputerTextInterfaceComponent::CloseUI() {
}

void UUWEComputerTextInterfaceComponent::AddRootDialogueOption(UUWEComputerTextInterfaceDialogueData* DialogueData) {
}


