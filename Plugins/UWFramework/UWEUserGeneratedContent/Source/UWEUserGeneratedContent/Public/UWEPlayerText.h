#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UWEPlayerText.generated.h"

USTRUCT(BlueprintType)
struct FUWEPlayerText {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FGameplayTag Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FString Value;
    
    UWEUSERGENERATEDCONTENT_API FUWEPlayerText();
};

