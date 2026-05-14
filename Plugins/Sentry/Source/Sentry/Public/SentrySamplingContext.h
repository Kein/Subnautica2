#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SentryVariant.h"
#include "SentrySamplingContext.generated.h"

class USentryTransactionContext;

UCLASS(BlueprintType, HideDropdown)
class SENTRY_API USentrySamplingContext : public UObject {
    GENERATED_BODY()
public:
    USentrySamplingContext();

    UFUNCTION(BlueprintPure)
    USentryTransactionContext* GetTransactionContext() const;
    
    UFUNCTION(BlueprintPure)
    TMap<FString, FSentryVariant> GetCustomSamplingContext() const;
    
};

