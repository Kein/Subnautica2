#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EUWEGameplayCueType.h"
#include "UWEGameplayCueEntry.generated.h"

USTRUCT()
struct FUWEGameplayCueEntry {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTag CueTag;
    
    UPROPERTY(EditAnywhere)
    EUWEGameplayCueType CueType;
    
    UPROPERTY(EditAnywhere)
    float Period;
    
    UWEABILITYSYSTEM_API FUWEGameplayCueEntry();
};

