#pragma once
#include "CoreMinimal.h"
#include "Subsystems/EngineSubsystem.h"
#include "UWECrashReporterSubsystem.generated.h"

class USentrySettings;

UCLASS()
class UWECRASHREPORTER_API UUWECrashReporterSubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
    UUWECrashReporterSubsystem();

    UFUNCTION()
    void OnSentrySettings(USentrySettings* Settings);
    
};

