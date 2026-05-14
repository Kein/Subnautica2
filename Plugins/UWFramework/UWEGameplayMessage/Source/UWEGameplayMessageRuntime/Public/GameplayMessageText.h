#pragma once
#include "CoreMinimal.h"
#include "GameplayMessageText.generated.h"

USTRUCT(BlueprintType)
struct FGameplayMessageText {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FText Text;
    
    UWEGAMEPLAYMESSAGERUNTIME_API FGameplayMessageText();
};

