#pragma once
#include "CoreMinimal.h"
#include "TransferProgressDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FTransferProgressDelegate, float, Progress, uint64, Sent, uint64, Total);

