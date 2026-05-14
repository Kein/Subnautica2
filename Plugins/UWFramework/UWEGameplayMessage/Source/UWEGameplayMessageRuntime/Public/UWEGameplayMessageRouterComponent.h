#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "UWEGameplayMessageRouterComponent.generated.h"

class UScriptStruct;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEGAMEPLAYMESSAGERUNTIME_API UUWEGameplayMessageRouterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UUWEGameplayMessageRouterComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(Reliable, Server)
    void ForwardMessageToServerInternal(const TArray<int32>& ReceiverPlayerIds, const FGameplayTag& Channel, const UScriptStruct* StructType, const FString& MessageString, int32 FromPlayerId);
    
    UFUNCTION(Client, Reliable)
    void ForwardMessageToClientInternal(const FGameplayTag& Channel, const UScriptStruct* StructType, const FString& MessageString, int32 FromPlayerId);
    
};

