#pragma once
#include "CoreMinimal.h"
#include "EUWEComputerTextInterfaceAfterDialogueAction.generated.h"

UENUM(BlueprintType)
enum class EUWEComputerTextInterfaceAfterDialogueAction : uint8 {
    None,
    GoBackToPreviousDialogue,
    GoBackToRoot,
    GoBackNumberOfDialogues,
};

