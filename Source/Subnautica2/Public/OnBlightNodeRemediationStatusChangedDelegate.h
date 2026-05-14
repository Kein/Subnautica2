#pragma once
#include "CoreMinimal.h"
#include "OnBlightNodeRemediationStatusChangedDelegate.generated.h"

class USN2BlightNodeDataAsset;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnBlightNodeRemediationStatusChanged, USN2BlightNodeDataAsset*, DataAsset, bool, Remediated);

