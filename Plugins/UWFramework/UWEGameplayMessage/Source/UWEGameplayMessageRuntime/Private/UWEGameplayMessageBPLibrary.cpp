#include "UWEGameplayMessageBPLibrary.h"

UUWEGameplayMessageBPLibrary::UUWEGameplayMessageBPLibrary() {
}

APlayerState* UUWEGameplayMessageBPLibrary::PlayerStateFromPlayerId(UObject* WorldContextObject, int32 PlayerId) {
    return NULL;
}

int32 UUWEGameplayMessageBPLibrary::PlayerIdFromPlayerState(UObject* WorldContextObject, APlayerState* PlayerState) {
    return 0;
}

int32 UUWEGameplayMessageBPLibrary::PlayerIdFromPawn(UObject* WorldContextObject, const AActor* PawnActor) {
    return 0;
}

int32 UUWEGameplayMessageBPLibrary::PlayerIdFromController(UObject* WorldContextObject, const APlayerController* PlayerController) {
    return 0;
}

void UUWEGameplayMessageBPLibrary::NotifyPlayerSystemMessage(UObject* WorldContextObject, FGameplayTag Severity, FText Message, AActor* PlayerActor) {
}

void UUWEGameplayMessageBPLibrary::NotifyPlayerLocalized(UObject* WorldContextObject, FGameplayTag Severity, FName StringTableID, const FString& StringTableKey, TArray<FText> TextArgs, const AActor* PlayerActor) {
}

void UUWEGameplayMessageBPLibrary::NotifyLocalPlayerSimple(UObject* WorldContextObject, FGameplayTag Severity, FText Message) {
}

void UUWEGameplayMessageBPLibrary::NotifyLocalPlayer(UObject* WorldContextObject, FGameplayTag Severity, FText Message, TArray<FText> TextArgs, UInputAction* InputAction) {
}

void UUWEGameplayMessageBPLibrary::NotifyAllPlayersString(UObject* WorldContextObject, const FString& String, int32 FromPlayerId) {
}

void UUWEGameplayMessageBPLibrary::NotifyAllPlayersLocalized(UObject* WorldContextObject, FGameplayTag Severity, FName StringTableID, const FString& StringTableKey, TArray<FText> TextArgs, int32 FromPlayerId) {
}

int32 UUWEGameplayMessageBPLibrary::LocalPlayerId(UObject* WorldContextObject) {
    return 0;
}

void UUWEGameplayMessageBPLibrary::K2_SendGameplayMessageToSelf(UObject* WorldContextObject, const FGameplayTag Channel, const int32& Message) {
}

void UUWEGameplayMessageBPLibrary::K2_SendGameplayMessageToPlayer(UObject* WorldContextObject, const FGameplayTag Channel, const int32& Message, const int32 PlayerId, int32 FromPlayerId) {
}

void UUWEGameplayMessageBPLibrary::K2_SendGameplayMessageToOtherPlayers(UObject* WorldContextObject, const FGameplayTag Channel, const int32& Message, const int32 FromPlayerId) {
}

void UUWEGameplayMessageBPLibrary::K2_SendGameplayMessageToAllPlayers(UObject* WorldContextObject, FGameplayTag Channel, const int32& Message, int32 FromPlayerId) {
}

void UUWEGameplayMessageBPLibrary::BroadcastStringMessageToAllPlayers(UObject* WorldContextObject, const FString& StringMessage) {
}

TArray<int32> UUWEGameplayMessageBPLibrary::AllPlayerIds(UObject* WorldContextObject) {
    return TArray<int32>();
}


