#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EUWEVideoToursSubsystemState.h"
#include "UWEVideoTour.h"
#include "UWEVideoToursTest.h"
#include "UWEVideoToursSubsystem.generated.h"

class UUWEVideoToursSubsystem;
class UWorld;

UCLASS(BlueprintType, DefaultConfig, Config=Game)
class UWEAUTOMATIONTESTING_API UUWEVideoToursSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    double UWEWaitPeriodAfterStreamingSecs;
    
    UPROPERTY(Config, EditAnywhere)
    double UWEStreamingTimeoutSecs;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FString> DefaultConsoleCommandsBefore;
    
    UPROPERTY(Config, EditAnywhere)
    bool bProfiler;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FString> DefaultConsoleCommandsAfter;
    
    UPROPERTY(EditAnywhere)
    float VideoTourSamplingRate;
    
    UPROPERTY(EditAnywhere)
    float OutlierValuesTolerance;
    
    UUWEVideoToursSubsystem();

    UFUNCTION(BlueprintCallable)
    bool Stop();
    
    UFUNCTION(BlueprintPure)
    static bool SaveVideoToursTest(const FString& Path, const FUWEVideoToursTest& VideoToursTest);
    
    UFUNCTION(BlueprintPure)
    static bool SaveVideoTour(const FString& Path, const FUWEVideoTour& VideoTour);
    
    UFUNCTION(BlueprintCallable)
    bool RunTestJson(const FString& Filename);
    
    UFUNCTION(BlueprintCallable)
    bool RunTest(const FUWEVideoToursTest& Config);
    
    UFUNCTION(BlueprintCallable)
    bool Record(FName Filename);
    
    UFUNCTION(BlueprintCallable)
    bool PlayFromJson(const FString& JsonFilename, bool bSaveResults, const bool bUploadResults);
    
    UFUNCTION(BlueprintCallable)
    bool Play(bool bSaveResults, bool bUploadResults);
    
    UFUNCTION(BlueprintPure)
    static bool LoadVideoToursTest(const FString& Path, FUWEVideoToursTest& Output);
    
    UFUNCTION(BlueprintPure)
    static bool LoadVideoTour(const FString& Path, FUWEVideoTour& Output);
    
    UFUNCTION(BlueprintPure)
    static FString GetVideoToursUserFolder();
    
    UFUNCTION(BlueprintPure)
    static FString GetVideoToursContentFolder();
    
    UFUNCTION(BlueprintPure)
    EUWEVideoToursSubsystemState GetState() const;
    
    UFUNCTION(BlueprintPure)
    static UUWEVideoToursSubsystem* Get(const UWorld* InWorld);
    
    UFUNCTION(BlueprintPure)
    bool CanStop() const;
    
    UFUNCTION(BlueprintPure)
    bool CanRecord() const;
    
    UFUNCTION(BlueprintPure)
    bool CanPlay() const;
    
};

