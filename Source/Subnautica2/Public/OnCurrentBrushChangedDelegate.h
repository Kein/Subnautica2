#pragma once
#include "CoreMinimal.h"
#include "SN2EditBrush.h"
#include "OnCurrentBrushChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCurrentBrushChanged, FSN2EditBrush, EditBrush);

