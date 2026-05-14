#include "UWEGameplayMessageRouterComponent.h"

UUWEGameplayMessageRouterComponent::UUWEGameplayMessageRouterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UUWEGameplayMessageRouterComponent::ForwardMessageToServerInternal_Implementation(const TArray<int32>& ReceiverPlayerIds, const FGameplayTag& Channel, const UScriptStruct* StructType, const FString& MessageString, int32 FromPlayerId) {
}

void UUWEGameplayMessageRouterComponent::ForwardMessageToClientInternal_Implementation(const FGameplayTag& Channel, const UScriptStruct* StructType, const FString& MessageString, int32 FromPlayerId) {
}


