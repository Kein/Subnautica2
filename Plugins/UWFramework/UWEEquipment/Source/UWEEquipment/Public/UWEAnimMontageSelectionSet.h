#pragma once
#include "CoreMinimal.h"
#include "UWEAnimMontageSelectionEntry.h"
#include "UWEAnimMontageSelectionSet.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct UWEEQUIPMENT_API FUWEAnimMontageSelectionSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FUWEAnimMontageSelectionEntry> MontageRules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAnimMontage> DefaultMontage;
    
    FUWEAnimMontageSelectionSet();
};

