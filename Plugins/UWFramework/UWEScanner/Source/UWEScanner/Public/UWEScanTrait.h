#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UWEScanTrait.generated.h"

USTRUCT(BlueprintType)
struct FUWEScanTrait {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag Type;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Text;
    
    UWESCANNER_API FUWEScanTrait();
};

