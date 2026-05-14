#pragma once
#include "CoreMinimal.h"
#include "UWEUnlockRuleElement.h"
#include "UWEUnlockRules.generated.h"

USTRUCT()
struct FUWEUnlockRules {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FUWEUnlockRuleElement> Rules;
    
    UWEUNLOCKABLES_API FUWEUnlockRules();
};

