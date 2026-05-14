#pragma once
#include "CoreMinimal.h"
#include "AnalyticsEventAttribute.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "UWEEventSubsystem.generated.h"

class AActor;

UCLASS(BlueprintType, Config=Game)
class UWEANALYTICS_API UUWEEventSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Config)
    int32 EventHistoryLen;
    
    UPROPERTY(BlueprintReadOnly)
    bool bEnabled;
    
protected:
    UPROPERTY(Config)
    int32 MaxAlternativeEvents;
    
    UPROPERTY(Config)
    bool bGPPDisabled;
    
public:
    UUWEEventSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool InbEnabled);
    
    UFUNCTION(BlueprintPure)
    bool IsEnabled();
    
    UFUNCTION()
    void Init();
    
    UFUNCTION(BlueprintCallable)
    void FlushEventsAlternative();
    
    UFUNCTION(BlueprintCallable)
    void BPRecordEvent(const FString& EventName, AActor* Player, const bool bVerbose, const TArray<FAnalyticsEventAttr>& Attributes);
    
};

