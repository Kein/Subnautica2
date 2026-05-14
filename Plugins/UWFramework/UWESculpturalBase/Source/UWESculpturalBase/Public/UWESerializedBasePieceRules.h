#pragma once
#include "CoreMinimal.h"
#include "UWESerializedBasePieceRules.generated.h"

USTRUCT(BlueprintType)
struct FUWESerializedBasePieceRules {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString PieceIdString;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> RulesArray;
    
    UWESCULPTURALBASE_API FUWESerializedBasePieceRules();
};

