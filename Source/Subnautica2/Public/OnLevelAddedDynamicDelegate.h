#pragma once
#include "CoreMinimal.h"
#include "OnLevelAddedDynamicDelegate.generated.h"

class ULevel;
class UWorld;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLevelAddedDynamic, ULevel*, InLevel, UWorld*, World);

