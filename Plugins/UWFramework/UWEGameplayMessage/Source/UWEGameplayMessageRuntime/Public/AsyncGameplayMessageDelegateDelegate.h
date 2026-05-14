#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AsyncGameplayMessageDelegateDelegate.generated.h"

class UUWEAsyncAction_ListenForGameplayMessage;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FAsyncGameplayMessageDelegate, UUWEAsyncAction_ListenForGameplayMessage*, ProxyObject, FGameplayTag, ActualChannel, int32, SenderId);

