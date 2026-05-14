#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "CommonUserHandleSystemMessageDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FCommonUserHandleSystemMessageDelegate, FGameplayTag, MessageType, FText, TitleText, FText, BodyText);

