#pragma once
#include "CoreMinimal.h"
#include "SonarConnectionChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSonarConnectionChanged, const bool, bHasConnection);

