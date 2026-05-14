#pragma once
#include "CoreMinimal.h"
#include "UWESaveDataReadOnlyContext.h"
#include "UWESaveUpgradeContext.generated.h"

USTRUCT()
struct UWESAVESYSTEM_API FUWESaveUpgradeContext : public FUWESaveDataReadOnlyContext {
    GENERATED_BODY()
public:
    FUWESaveUpgradeContext();
};

