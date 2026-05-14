#pragma once
#include "CoreMinimal.h"
#include "Engine/CancellableAsyncAction.h"
#include "GameplayTagContainer.h"
#include "AsyncGameplayMessageDelegateDelegate.h"
#include "EGameplayMessageMatch.h"
#include "UWEAsyncAction_ListenForGameplayMessage.generated.h"

class UObject;
class UScriptStruct;
class UUWEAsyncAction_ListenForGameplayMessage;

UCLASS()
class UWEGAMEPLAYMESSAGERUNTIME_API UUWEAsyncAction_ListenForGameplayMessage : public UCancellableAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FAsyncGameplayMessageDelegate OnMessageReceived;
    
    UUWEAsyncAction_ListenForGameplayMessage();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UUWEAsyncAction_ListenForGameplayMessage* ListenForGameplayMessages(UObject* WorldContextObject, FGameplayTag Channel, UScriptStruct* PayloadType, EGameplayMessageMatch MatchType);
    
    UFUNCTION(BlueprintCallable)
    bool GetPayload(UPARAM(Ref) int32& OutPayload);
    
};

