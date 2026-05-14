#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "UWESaveSystemSettings.generated.h"

UCLASS(BlueprintType, DefaultConfig, Config=UWESaveGame)
class UWESAVESYSTEM_API UUWESaveSystemSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config)
    FString SaveSlotName;
    
    UPROPERTY(Config, EditAnywhere)
    int32 XboxMaxSaveSlots;
    
    UPROPERTY(Config, EditAnywhere)
    int32 PS5MaxSaveSlots;
    
    UPROPERTY(Config, EditAnywhere)
    int32 PCMaxSaveSlots;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    int32 ThumbnailWidth;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    int32 ThumbnailHeight;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    float ScreenShotTimeout;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool ThumbnailsEnabled;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    float AutoSaveDurationInSeconds;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    float FirstAutoSaveDelayInSeconds;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    int32 DurationInSecondsToWaitAfterLastSavePromptSaveOnExit;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    uint8 AutoSaveRecordEventFrequency;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    uint8 AutoSaveThumbnailFrequency;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    float SaveBackupPeriodInMinutes;
    
    UUWESaveSystemSettings();

    UFUNCTION(BlueprintCallable)
    static int32 GetDurationInSecondsToWaitAfterLastSavePromptSaveOnExit();
    
};

