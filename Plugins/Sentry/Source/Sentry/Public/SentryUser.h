#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SentryUser.generated.h"

UCLASS(BlueprintType, HideDropdown)
class SENTRY_API USentryUser : public UObject {
    GENERATED_BODY()
public:
    USentryUser();

    UFUNCTION(BlueprintCallable)
    void SetUsername(const FString& UserName);
    
    UFUNCTION(BlueprintCallable)
    void SetIpAddress(const FString& IpAddress);
    
    UFUNCTION(BlueprintCallable)
    void SetId(const FString& ID);
    
    UFUNCTION(BlueprintCallable)
    void SetEmail(const FString& Email);
    
    UFUNCTION(BlueprintCallable)
    void SetData(const TMap<FString, FString>& Data);
    
    UFUNCTION(BlueprintPure)
    FString GetUsername() const;
    
    UFUNCTION(BlueprintPure)
    FString GetIpAddress() const;
    
    UFUNCTION(BlueprintPure)
    FString GetId() const;
    
    UFUNCTION(BlueprintPure)
    FString GetEmail() const;
    
    UFUNCTION(BlueprintPure)
    TMap<FString, FString> GetData() const;
    
};

