#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "PhotoTourConfig.h"
#include "UWEPhotoToursSubsystem.generated.h"

class AActor;
class APlayerController;
class UUWEPhotoToursSubsystem;
class UWorld;

UCLASS(BlueprintType, DefaultConfig, Config=Game)
class UWEPHOTOTOURS_API UUWEPhotoToursSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    int32 CurrentLevelIndex;
    
    UPROPERTY(BlueprintReadOnly)
    bool bRunOnAllLevels;
    
    UPROPERTY()
    bool bIsPhotoTourRunning;
    
    UPROPERTY(BlueprintReadOnly)
    AActor* OriginalCamera;
    
    UPROPERTY(BlueprintReadOnly)
    APlayerController* PlayerController;
    
    UPROPERTY(Config)
    double StreamingTimeoutSecs;
    
    UPROPERTY(Config)
    int32 UWEMaxCameras;
    
    UPROPERTY(Config)
    double UWEWaitPeriodAfterStreamingSecs;
    
    UPROPERTY(Config)
    int32 bEnableCSV;
    
    UPROPERTY(Config)
    int32 bEnableStatsUI;
    
    UPROPERTY(Config)
    bool bSetVideoMode;
    
    UUWEPhotoToursSubsystem();

    UFUNCTION(BlueprintCallable)
    bool StartPhotoToursOnAllLevels(FPhotoTourConfig Config);
    
    UFUNCTION(BlueprintCallable)
    bool StartPhotoTourOnCurrentLevel();
    
    UFUNCTION(BlueprintPure)
    static TArray<FString> GetPhotoToursLevels(const FString& MapGroup);
    
    UFUNCTION(BlueprintPure)
    bool GetIsPhotoTourRunning() const;
    
    UFUNCTION(BlueprintPure)
    static FString GetDefaultPhotoToursFolder();
    
    UFUNCTION(BlueprintPure)
    static UUWEPhotoToursSubsystem* Get(const UWorld* InWorld);
    
    UFUNCTION(BlueprintPure)
    bool CanStartPhotoTour() const;
    
};

