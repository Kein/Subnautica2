#pragma once
#include "CoreMinimal.h"
#include "SonarLoginCompletedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSonarLoginCompleted, const bool, bLoginSucceeded);

