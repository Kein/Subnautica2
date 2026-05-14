#pragma once
#include "CoreMinimal.h"
#include "EUWEProxyUpdateType.generated.h"

UENUM(BlueprintType)
enum class EUWEProxyUpdateType : uint8 {
    None,
    InitializeProxy,
    InitializeStaticProxy,
    ApplyEdit,
    ShowFeedback,
};

