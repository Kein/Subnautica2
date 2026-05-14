#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "PlayerEventTag.generated.h"

USTRUCT(BlueprintType)
struct FPlayerEventTag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag Verb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Count;
    
    UWECOMPUTERTEXTINTERFACE_API FPlayerEventTag();
};

