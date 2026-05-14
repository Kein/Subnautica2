#pragma once
#include "CoreMinimal.h"
#include "CheatListItem.generated.h"

USTRUCT(BlueprintType)
struct FCheatListItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FString Title;
    
    UPROPERTY(BlueprintReadWrite)
    FString Context;
    
    UPROPERTY(BlueprintReadWrite)
    FString ToolTip;
    
    SUBNAUTICA2_API FCheatListItem();
};

