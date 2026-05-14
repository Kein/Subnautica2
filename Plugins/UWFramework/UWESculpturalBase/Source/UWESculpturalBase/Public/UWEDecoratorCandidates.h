#pragma once
#include "CoreMinimal.h"
#include "UWEDecoratorCandidates.generated.h"

class UUWEBaseDecorator;

USTRUCT()
struct FUWEDecoratorCandidates {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<UUWEBaseDecorator*> Decorators;
    
    UWESCULPTURALBASE_API FUWEDecoratorCandidates();
};

