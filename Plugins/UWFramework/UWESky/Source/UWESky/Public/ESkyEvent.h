#pragma once
#include "CoreMinimal.h"
#include "ESkyEvent.generated.h"

UENUM()
enum class ESkyEvent : int32 {
    SE_None,
    SE_Transition,
    SE_Force,
};

