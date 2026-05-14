#pragma once
#include "CoreMinimal.h"
#include "OnSeedChangedDelegate.generated.h"

class UUWEItemType;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSeedChanged, UUWEItemType*, NewItemType);

