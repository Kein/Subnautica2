#pragma once
#include "CoreMinimal.h"
#include "UWEBaseModulePieceID.h"
#include "UWEDecoratorCandidates.h"
#include "UWESerializedDecorators.generated.h"

USTRUCT(BlueprintType)
struct FUWESerializedDecorators {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FUWEBaseModulePieceID PieceId;
    
    UPROPERTY(EditAnywhere)
    FUWEDecoratorCandidates Decorators;
    
    UWESCULPTURALBASE_API FUWESerializedDecorators();
};

