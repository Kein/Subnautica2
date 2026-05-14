#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESentryLevel.h"
#include "SentryVariant.h"
#include "SentryBreadcrumb.generated.h"

UCLASS(BlueprintType, HideDropdown)
class SENTRY_API USentryBreadcrumb : public UObject {
    GENERATED_BODY()
public:
    USentryBreadcrumb();

    UFUNCTION(BlueprintCallable)
    void SetType(const FString& Type);
    
    UFUNCTION(BlueprintCallable)
    void SetMessage(const FString& Message);
    
    UFUNCTION(BlueprintCallable)
    void SetLevel(ESentryLevel Level);
    
    UFUNCTION(BlueprintCallable)
    void SetData(const TMap<FString, FSentryVariant>& Data);
    
    UFUNCTION(BlueprintCallable)
    void SetCategory(const FString& Category);
    
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
    UFUNCTION(BlueprintPure)
    FString GetType() const;
    
    UFUNCTION(BlueprintPure)
    FString GetMessage() const;
    
    UFUNCTION(BlueprintPure)
    ESentryLevel GetLevel() const;
    
    UFUNCTION(BlueprintPure)
    TMap<FString, FSentryVariant> GetData() const;
    
    UFUNCTION(BlueprintPure)
    FString GetCategory() const;
    
};

