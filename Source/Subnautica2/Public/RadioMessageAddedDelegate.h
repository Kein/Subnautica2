#pragma once
#include "CoreMinimal.h"
#include "RadioMessageAddedDelegate.generated.h"

class UUWEComputerTextInterfaceDialogueData;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRadioMessageAdded, UUWEComputerTextInterfaceDialogueData*, RadioData);

