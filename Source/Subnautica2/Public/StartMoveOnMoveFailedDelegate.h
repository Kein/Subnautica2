#pragma once
#include "CoreMinimal.h"
#include "StartMoveState.h"
#include "StartMoveOnMoveFailedDelegate.generated.h"

class ASN2BuilderGhost;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FStartMoveOnMoveFailed, FStartMoveState, State, ASN2BuilderGhost*, MovePlacementGhost);

