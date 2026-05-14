#include "UWEDialogueStatics.h"

UUWEDialogueStatics::UUWEDialogueStatics() {
}

void UUWEDialogueStatics::SkipCurrentDialogueForPlayer(APawn* Player) {
}

void UUWEDialogueStatics::SkipAllDialogueForPlayer(APlayerState* Player) {
}

bool UUWEDialogueStatics::PlayDialogueWithinProximity(UObject* WorldContextObject, UUWEDialogueNode* Dialogue, FVector CenterLocation, float Radius) {
    return false;
}

bool UUWEDialogueStatics::PlayDialogueForPlayer(UUWEDialogueNode* Dialogue, AActor* Player) {
    return false;
}

bool UUWEDialogueStatics::PlayDialogue(UObject* WorldContextObject, UUWEDialogueNode* Dialogue) {
    return false;
}

bool UUWEDialogueStatics::PlayAlertForPlayer(UUWEDialogueNode* Dialogue, APlayerState* Player) {
    return false;
}

bool UUWEDialogueStatics::IsPlayerSafeForDialogue(APlayerState* Player) {
    return false;
}

bool UUWEDialogueStatics::ArePlayerAlertsSuppressed(APlayerState* Player) {
    return false;
}


