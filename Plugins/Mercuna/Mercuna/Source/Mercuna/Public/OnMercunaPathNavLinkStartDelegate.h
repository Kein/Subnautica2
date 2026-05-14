#pragma once
#include "CoreMinimal.h"
#include "MercunaPathNavLinkInfo.h"
#include "OnMercunaPathNavLinkStartDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FOnMercunaPathNavLinkStart, const FMercunaPathNavLinkInfo&, NavLinkInfo);

