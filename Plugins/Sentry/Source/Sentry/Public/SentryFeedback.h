#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SentryFeedback.generated.h"

UCLASS(BlueprintType, HideDropdown)
class SENTRY_API USentryFeedback : public UObject {
    GENERATED_BODY()
public:
    USentryFeedback();

    UFUNCTION(BlueprintCallable)
    void SetName(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    void SetContactEmail(const FString& Email);
    
    UFUNCTION(BlueprintCallable)
    void SetAssociatedEvent(const FString& EventID);
    
    UFUNCTION(BlueprintCallable)
    void Initialize(const FString& Message);
    
    UFUNCTION(BlueprintPure)
    FString GetName() const;
    
    UFUNCTION(BlueprintPure)
    FString GetMessage() const;
    
    UFUNCTION(BlueprintPure)
    FString GetContactEmail() const;
    
    UFUNCTION(BlueprintPure)
    FString GetAssociatedEvent() const;
    
};

