#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "InteractionInfo.generated.h"

USTRUCT(BlueprintType)
struct FInteractionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString PrimaryText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag InteractionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bHighlightTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag Reason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText TextInputOverride;
    
    UWEINTERFACES_API FInteractionInfo();
};

