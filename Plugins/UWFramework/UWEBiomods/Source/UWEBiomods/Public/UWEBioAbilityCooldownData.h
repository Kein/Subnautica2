#pragma once
#include "CoreMinimal.h"
#include "UWEBioAbilityCooldownData.generated.h"

USTRUCT(BlueprintType)
struct FUWEBioAbilityCooldownData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    float duration;
    
    UPROPERTY(BlueprintReadOnly)
    float StartTime;
    
    UWEBIOMODS_API FUWEBioAbilityCooldownData();
};

