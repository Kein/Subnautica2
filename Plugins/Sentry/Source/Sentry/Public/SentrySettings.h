#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AutomaticBreadcrumbs.h"
#include "AutomaticBreadcrumbsForLogs.h"
#include "ESentryCliLogLevel.h"
#include "ESentryDatabaseLocation.h"
#include "ESentryTracesSamplingType.h"
#include "EnableBuildConfigurations.h"
#include "EnableBuildTargets.h"
#include "TagsPromotion.h"
#include "Templates/SubclassOf.h"
#include "SentrySettings.generated.h"

class USentryBeforeBreadcrumbHandler;
class USentryBeforeSendHandler;
class USentryTraceSampler;

UCLASS(BlueprintType, DefaultConfig, Config=Engine)
class SENTRY_API USentrySettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    bool InitAutomatically;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    FString Dsn;
    
    UPROPERTY(Config, EditAnywhere)
    bool Debug;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    FString Environment;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    FString Dist;
    
    UPROPERTY(Config, EditAnywhere)
    float SampleRate;
    
    UPROPERTY(Config, EditAnywhere)
    bool EnableAutoLogAttachment;
    
    UPROPERTY(Config, EditAnywhere)
    bool AttachStacktrace;
    
    UPROPERTY(Config, EditAnywhere)
    bool SendDefaultPii;
    
    UPROPERTY(Config, EditAnywhere)
    bool AttachScreenshot;
    
    UPROPERTY(Config, EditAnywhere)
    bool AttachGpuDump;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    int32 MaxAttachmentSize;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    int32 MaxBreadcrumbs;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    FAutomaticBreadcrumbs AutomaticBreadcrumbs;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    FAutomaticBreadcrumbsForLogs AutomaticBreadcrumbsForLogs;
    
    UPROPERTY(Config, EditAnywhere)
    bool EnableAutoSessionTracking;
    
    UPROPERTY(Config, EditAnywhere)
    int32 SessionTimeout;
    
    UPROPERTY(Config, EditAnywhere)
    bool OverrideReleaseName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    FString Release;
    
    UPROPERTY(Config, EditAnywhere)
    bool UseProxy;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    FString ProxyUrl;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    TSubclassOf<USentryBeforeSendHandler> BeforeSendHandler;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    TSubclassOf<USentryBeforeBreadcrumbHandler> BeforeBreadcrumbHandler;
    
    UPROPERTY(Config, EditAnywhere)
    bool EnableAutoCrashCapturing;
    
    UPROPERTY(Config, EditAnywhere)
    ESentryDatabaseLocation DatabaseLocation;
    
    UPROPERTY(Config, EditAnywhere)
    bool CrashpadWaitForUpload;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    TArray<FString> InAppInclude;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    TArray<FString> InAppExclude;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool EnableAppNotRespondingTracking;
    
    UPROPERTY(Config, EditAnywhere)
    bool EnableTracing;
    
    UPROPERTY(Config, EditAnywhere)
    ESentryTracesSamplingType SamplingType;
    
    UPROPERTY(Config, EditAnywhere)
    float TracesSampleRate;
    
    UPROPERTY(Config, EditAnywhere)
    TSubclassOf<USentryTraceSampler> TracesSampler;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    FString EditorDsn;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    FTagsPromotion TagsPromotion;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    FEnableBuildConfigurations EnableBuildConfigurations;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    FEnableBuildTargets EnableBuildTargets;
    
    UPROPERTY(Config, EditAnywhere)
    bool EnableForPromotedBuildsOnly;
    
    UPROPERTY(Config, EditAnywhere)
    bool UploadSymbolsAutomatically;
    
    UPROPERTY(EditAnywhere)
    FString ProjectName;
    
    UPROPERTY(EditAnywhere)
    FString OrgName;
    
    UPROPERTY(EditAnywhere)
    FString AuthToken;
    
    UPROPERTY(Config, EditAnywhere)
    bool IncludeSources;
    
    UPROPERTY(Config, EditAnywhere)
    ESentryCliLogLevel DiagnosticLevel;
    
    UPROPERTY(Config, EditAnywhere)
    bool UseLegacyGradlePlugin;
    
    UPROPERTY(Config, EditAnywhere)
    FString CrashReporterUrl;
    
    UPROPERTY(Config, EditAnywhere)
    bool bRequireUserConsent;
    
    UPROPERTY(Config, EditAnywhere)
    bool bDefaultUserConsentGiven;
    
    USentrySettings();

};

