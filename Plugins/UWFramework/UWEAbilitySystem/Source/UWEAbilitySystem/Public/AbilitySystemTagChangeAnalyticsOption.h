#pragma once
#include "CoreMinimal.h"
#include "AbilitySystemTagChangeAnalyticsOption.generated.h"

USTRUCT(BlueprintType)
struct UWEABILITYSYSTEM_API FAbilitySystemTagChangeAnalyticsOption {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString Name;
    
    FAbilitySystemTagChangeAnalyticsOption();
};

