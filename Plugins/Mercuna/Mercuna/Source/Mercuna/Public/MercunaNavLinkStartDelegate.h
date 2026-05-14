#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EMercunaNavigationLinkDirection.h"
#include "MercunaNavLinkStartDelegate.generated.h"

class APawn;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FMercunaNavLinkStart, APawn*, Pawn, EMercunaNavigationLinkDirection, Direction, FVector, Destination);

