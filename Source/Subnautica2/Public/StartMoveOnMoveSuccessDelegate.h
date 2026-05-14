#pragma once
#include "CoreMinimal.h"
#include "StartMoveState.h"
#include "StartMoveOnMoveSuccessDelegate.generated.h"

class ASN2BuilderGhost;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FStartMoveOnMoveSuccess, FStartMoveState, State, ASN2BuilderGhost*, MovePlacementGhost);

