#pragma once
#include "CoreMinimal.h"
#include "Subsystems/EngineSubsystem.h"
#include "ConfigureScopeDelegateDelegate.h"
#include "ConfigureSettingsDelegateDelegate.h"
#include "ESentryCrashedLastRun.h"
#include "ESentryLevel.h"
#include "EUserConsent.h"
#include "SentryTransactionOptions.h"
#include "SentryVariant.h"
#include "SentrySubsystem.generated.h"

class USentryAttachment;
class USentryBeforeBreadcrumbHandler;
class USentryBeforeSendHandler;
class USentryBreadcrumb;
class USentryEvent;
class USentryFeedback;
class USentryTraceSampler;
class USentryTransaction;
class USentryTransactionContext;
class USentryUser;

UCLASS(BlueprintType)
class SENTRY_API USentrySubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    USentryBeforeSendHandler* BeforeSendHandler;
    
    UPROPERTY()
    USentryBeforeBreadcrumbHandler* BeforeBreadcrumbHandler;
    
    UPROPERTY()
    USentryTraceSampler* TraceSampler;
    
public:
    USentrySubsystem();

    UFUNCTION(BlueprintCallable)
    USentryTransaction* StartTransactionWithContextAndTimestamp(USentryTransactionContext* Context, int64 Timestamp, bool BindToScope);
    
    UFUNCTION(BlueprintCallable)
    USentryTransaction* StartTransactionWithContextAndOptions(USentryTransactionContext* Context, const FSentryTransactionOptions& Options);
    
    UFUNCTION(BlueprintCallable)
    USentryTransaction* StartTransactionWithContext(USentryTransactionContext* Context, bool BindToScope);
    
    UFUNCTION(BlueprintCallable)
    USentryTransaction* StartTransaction(const FString& Name, const FString& Operation, bool BindToScope);
    
    UFUNCTION(BlueprintCallable)
    void StartSession();
    
    UFUNCTION(BlueprintCallable)
    void SetUser(USentryUser* User);
    
    UFUNCTION(BlueprintCallable)
    void SetTag(const FString& Key, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetLevel(ESentryLevel Level);
    
    UFUNCTION(BlueprintCallable)
    void SetContext(const FString& Key, const TMap<FString, FSentryVariant>& Values);
    
    UFUNCTION(BlueprintCallable)
    void RevokeUserConsent();
    
    UFUNCTION(BlueprintCallable)
    void RemoveUser();
    
    UFUNCTION(BlueprintCallable)
    void RemoveTag(const FString& Key);
    
    UFUNCTION(BlueprintPure)
    bool IsSupportedForCurrentSettings() const;
    
    UFUNCTION(BlueprintPure)
    bool IsEnabled() const;
    
    UFUNCTION(BlueprintPure)
    ESentryCrashedLastRun IsCrashedLastRun() const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeWithSettings(const FConfigureSettingsDelegate& OnConfigureSettings);
    
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
    UFUNCTION(BlueprintCallable)
    void GiveUserConsent();
    
    UFUNCTION(BlueprintPure)
    EUserConsent GetUserConsent() const;
    
    UFUNCTION(BlueprintCallable)
    void EndSession();
    
    UFUNCTION(BlueprintCallable)
    USentryTransactionContext* ContinueTrace(const FString& SentryTrace, const TArray<FString>& BaggageHeaders);
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
    UFUNCTION(BlueprintCallable)
    void ClearBreadcrumbs();
    
    UFUNCTION(BlueprintCallable)
    void ClearAttachments();
    
    UFUNCTION(BlueprintCallable)
    FString CaptureMessageWithScope(const FString& Message, const FConfigureScopeDelegate& OnConfigureScope, ESentryLevel Level);
    
    UFUNCTION(BlueprintCallable)
    FString CaptureMessage(const FString& Message, ESentryLevel Level);
    
    UFUNCTION(BlueprintCallable)
    void CaptureFeedbackWithParams(const FString& Message, const FString& Name, const FString& Email, const FString& EventID);
    
    UFUNCTION(BlueprintCallable)
    void CaptureFeedback(USentryFeedback* Feedback);
    
    UFUNCTION(BlueprintCallable)
    FString CaptureEventWithScope(USentryEvent* Event, const FConfigureScopeDelegate& OnConfigureScope);
    
    UFUNCTION(BlueprintCallable)
    FString CaptureEvent(USentryEvent* Event);
    
    UFUNCTION(BlueprintCallable)
    void AddBreadcrumbWithParams(const FString& Message, const FString& Category, const FString& Type, const TMap<FString, FSentryVariant>& Data, ESentryLevel Level);
    
    UFUNCTION(BlueprintCallable)
    void AddBreadcrumb(USentryBreadcrumb* Breadcrumb);
    
    UFUNCTION(BlueprintCallable)
    void AddAttachment(USentryAttachment* Attachment);
    
};

