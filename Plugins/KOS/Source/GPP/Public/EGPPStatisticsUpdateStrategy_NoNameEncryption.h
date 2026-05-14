#pragma once
#include "CoreMinimal.h"
#include "EGPPStatisticsUpdateStrategy_NoNameEncryption.generated.h"

UENUM(BlueprintType)
enum class EGPPStatisticsUpdateStrategy_NoNameEncryption : uint8 {
    OVERRIDE,
    INCREMENT,
    MAX,
    MIN,
};

