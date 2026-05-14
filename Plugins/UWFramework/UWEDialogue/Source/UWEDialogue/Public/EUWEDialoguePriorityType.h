#pragma once
#include "CoreMinimal.h"
#include "EUWEDialoguePriorityType.generated.h"

UENUM(BlueprintType)
enum class EUWEDialoguePriorityType : uint8 {
    Stompable,
    Requeueable,
    Critical,
};

