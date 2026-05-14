#pragma once
#include "CoreMinimal.h"
#include "RadioMessageRemovedDelegate.generated.h"

class UUWEComputerTextInterfaceDialogueData;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRadioMessageRemoved, UUWEComputerTextInterfaceDialogueData*, RadioData);

