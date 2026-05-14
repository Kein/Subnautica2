#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESentryLevel.h"
#include "SentryVariant.h"
#include "SentryEvent.generated.h"

UCLASS(BlueprintType, HideDropdown)
class SENTRY_API USentryEvent : public UObject {
    GENERATED_BODY()
public:
    USentryEvent();

    UFUNCTION(BlueprintPure)
    bool TryGetTag(const FString& Key, FString& Value) const;
    
    UFUNCTION(BlueprintPure)
    bool TryGetExtra(const FString& Key, FSentryVariant& Value) const;
    
    UFUNCTION(BlueprintPure)
    bool TryGetContext(const FString& Key, TMap<FString, FSentryVariant>& Value) const;
    
    UFUNCTION(BlueprintCallable)
    void SetTags(const TMap<FString, FString>& Tags);
    
    UFUNCTION(BlueprintCallable)
    void SetTag(const FString& Key, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMessage(const FString& Message);
    
    UFUNCTION(BlueprintCallable)
    void SetLevel(ESentryLevel Level);
    
    UFUNCTION(BlueprintCallable)
    void SetFingerprint(const TArray<FString>& Fingerprint);
    
    UFUNCTION(BlueprintCallable)
    void SetExtras(const TMap<FString, FSentryVariant>& Extras);
    
    UFUNCTION(BlueprintCallable)
    void SetExtra(const FString& Key, const FSentryVariant& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetContext(const FString& Key, const TMap<FString, FSentryVariant>& Values);
    
    UFUNCTION(BlueprintCallable)
    void RemoveTag(const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    void RemoveExtra(const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    void RemoveContext(const FString& Key);
    
    UFUNCTION(BlueprintPure)
    bool IsCrash() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAnr() const;
    
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
    UFUNCTION(BlueprintPure)
    TMap<FString, FString> GetTags() const;
    
    UFUNCTION(BlueprintPure)
    FString GetTag(const FString& Key) const;
    
    UFUNCTION(BlueprintPure)
    FString GetMessage() const;
    
    UFUNCTION(BlueprintPure)
    ESentryLevel GetLevel() const;
    
    UFUNCTION(BlueprintPure)
    FString GetId() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FString> GetFingerprint() const;
    
    UFUNCTION(BlueprintPure)
    TMap<FString, FSentryVariant> GetExtras() const;
    
    UFUNCTION(BlueprintPure)
    FSentryVariant GetExtra(const FString& Key) const;
    
    UFUNCTION(BlueprintPure)
    TMap<FString, FSentryVariant> GetContext(const FString& Key) const;
    
};

