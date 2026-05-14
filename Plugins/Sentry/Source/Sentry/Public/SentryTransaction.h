#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SentryVariant.h"
#include "SentryTransaction.generated.h"

class USentrySpan;

UCLASS(BlueprintType, HideDropdown)
class SENTRY_API USentryTransaction : public UObject {
    GENERATED_BODY()
public:
    USentryTransaction();

    UFUNCTION(BlueprintCallable)
    USentrySpan* StartChildSpanWithTimestamp(const FString& Operation, const FString& Description, int64 Timestamp, bool BindToScope);
    
    UFUNCTION(BlueprintCallable)
    USentrySpan* StartChildSpan(const FString& Operation, const FString& Description, bool BindToScope);
    
    UFUNCTION(BlueprintCallable)
    void SetTag(const FString& Key, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetName(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    void SetData(const FString& Key, const TMap<FString, FSentryVariant>& Values);
    
    UFUNCTION(BlueprintCallable)
    void RemoveTag(const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    void RemoveData(const FString& Key);
    
    UFUNCTION(BlueprintPure)
    bool IsFinished() const;
    
    UFUNCTION(BlueprintCallable)
    void GetTrace(FString& Name, FString& Value);
    
    UFUNCTION(BlueprintCallable)
    void FinishWithTimestamp(int64 Timestamp);
    
    UFUNCTION(BlueprintCallable)
    void Finish();
    
};

