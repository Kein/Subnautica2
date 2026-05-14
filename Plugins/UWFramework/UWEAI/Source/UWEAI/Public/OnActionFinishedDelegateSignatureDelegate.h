#pragma once
#include "CoreMinimal.h"
#include "OnActionFinishedDelegateSignatureDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnActionFinishedDelegateSignature, const AActor*, Owner, bool, bWasSuccess);

