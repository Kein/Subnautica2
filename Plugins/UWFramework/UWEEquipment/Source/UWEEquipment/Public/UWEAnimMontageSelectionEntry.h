#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UWEAnimMontageSelectionEntry.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct UWEEQUIPMENT_API FUWEAnimMontageSelectionEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UAnimMontage> Montage;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTagContainer RequiredTags;
    
    FUWEAnimMontageSelectionEntry();
};

