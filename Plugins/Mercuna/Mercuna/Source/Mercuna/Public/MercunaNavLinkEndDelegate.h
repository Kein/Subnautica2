#pragma once
#include "CoreMinimal.h"
#include "MercunaNavLinkEndDelegate.generated.h"

class APawn;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMercunaNavLinkEnd, APawn*, Pawn);

