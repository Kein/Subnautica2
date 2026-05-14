#pragma once
#include "CoreMinimal.h"
#include "OnPlayerGameStartedDelegateBPDelegate.generated.h"

class ASN2PlayerController;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayerGameStartedDelegateBP, ASN2PlayerController*, PlayerController, bool, IsNewGame);

