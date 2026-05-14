#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ESentryLevel.h"
#include "SentryVariant.h"
#include "SentryLibrary.generated.h"

class USentryAttachment;
class USentryBreadcrumb;
class USentryEvent;
class USentryFeedback;
class USentryTransactionContext;
class USentryUser;

UCLASS(BlueprintType)
class SENTRY_API USentryLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USentryLibrary();

    UFUNCTION(BlueprintCallable)
    static USentryUser* CreateSentryUser(const FString& Email, const FString& ID, const FString& UserName, const FString& IpAddress, const TMap<FString, FString>& Data);
    
    UFUNCTION(BlueprintCallable)
    static USentryTransactionContext* CreateSentryTransactionContext(const FString& Name, const FString& Operation);
    
    UFUNCTION(BlueprintCallable)
    static USentryFeedback* CreateSentryFeedback(const FString& Message, const FString& Name, const FString& Email, const FString& EventID);
    
    UFUNCTION(BlueprintCallable)
    static USentryEvent* CreateSentryEvent(const FString& Message, ESentryLevel Level);
    
    UFUNCTION(BlueprintCallable)
    static USentryBreadcrumb* CreateSentryBreadcrumb(const FString& Message, const FString& Type, const FString& Category, const TMap<FString, FSentryVariant>& Data, ESentryLevel Level);
    
    UFUNCTION(BlueprintCallable)
    static USentryAttachment* CreateSentryAttachmentWithPath(const FString& Path, const FString& Filename, const FString& ContentType);
    
    UFUNCTION(BlueprintCallable)
    static USentryAttachment* CreateSentryAttachmentWithData(const TArray<uint8>& Data, const FString& Filename, const FString& ContentType);
    
};

