#include "SentrySettings.h"

USentrySettings::USentrySettings() {
    this->InitAutomatically = false;
    this->Dsn = TEXT("https://05a28d83b2604ed9ad0f5b572bada217@o1251021.ingest.sentry.io/6781534");
    this->Debug = true;
    this->SampleRate = 1.00f;
    this->EnableAutoLogAttachment = false;
    this->AttachStacktrace = true;
    this->SendDefaultPii = false;
    this->AttachScreenshot = false;
    this->AttachGpuDump = true;
    this->MaxAttachmentSize = 20971520;
    this->MaxBreadcrumbs = 100;
    this->EnableAutoSessionTracking = true;
    this->SessionTimeout = 30000;
    this->OverrideReleaseName = false;
    this->UseProxy = false;
    this->BeforeSendHandler = NULL;
    this->BeforeBreadcrumbHandler = NULL;
    this->EnableAutoCrashCapturing = true;
    this->DatabaseLocation = ESentryDatabaseLocation::ProjectUserDirectory;
    this->CrashpadWaitForUpload = false;
    this->EnableAppNotRespondingTracking = false;
    this->EnableTracing = false;
    this->SamplingType = ESentryTracesSamplingType::UniformSampleRate;
    this->TracesSampleRate = 0.00f;
    this->TracesSampler = NULL;
    this->EnableForPromotedBuildsOnly = false;
    this->UploadSymbolsAutomatically = false;
    this->IncludeSources = true;
    this->DiagnosticLevel = ESentryCliLogLevel::Info;
    this->UseLegacyGradlePlugin = false;
    this->CrashReporterUrl = TEXT("https://o1251021.ingest.sentry.io/api/6781534/unreal/05a28d83b2604ed9ad0f5b572bada217/");
    this->bRequireUserConsent = false;
    this->bDefaultUserConsentGiven = true;
}


