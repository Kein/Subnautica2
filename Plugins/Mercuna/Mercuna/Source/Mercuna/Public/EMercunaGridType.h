#pragma once
#include "CoreMinimal.h"
#include "EMercunaGridType.generated.h"

UENUM()
enum class EMercunaGridType : int32 {
    None,
    Ground,
    Surface,
    Both,
};

