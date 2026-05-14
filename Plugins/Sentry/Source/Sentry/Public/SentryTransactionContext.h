#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SentryTransactionContext.generated.h"

UCLASS(BlueprintType, HideDropdown)
class SENTRY_API USentryTransactionContext : public UObject {
    GENERATED_BODY()
public:
    USentryTransactionContext();

    UFUNCTION(BlueprintCallable)
    void Initialize(const FString& Name, const FString& Operation);
    
    UFUNCTION(BlueprintPure)
    FString GetOperation() const;
    
    UFUNCTION(BlueprintPure)
    FString GetName() const;
    
};

