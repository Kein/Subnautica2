#pragma once
#include "CoreMinimal.h"
#include "Subsystems/EngineSubsystem.h"
#include "OnSmokeTestCompleteDelegate.h"
#include "UWESmoketestStep.h"
#include "UWESmoketestSubsystem.generated.h"

class AGameModeBase;
class APlayerController;
class UUWESmoketestComp;
class UWorld;

UCLASS(BlueprintType, Config=Game)
class UWESMOKETEST_API UUWESmoketestSubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FUWESmoketestStep> Steps;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 CurrentStep;
    
    UPROPERTY(Config)
    FString UWEDefaultSmoketestFilename;
    
    UPROPERTY(Config)
    bool UWEIsEnabled;
    
    UPROPERTY(Config)
    bool UWECrashOnFailure;
    
    UPROPERTY(Config)
    bool UWEExitOnSuccess;
    
    UPROPERTY()
    FString SmoketestFilename;
    
    UPROPERTY(BlueprintAssignable)
    FOnSmokeTestComplete OnSmokeTestsComplete;
    
    UUWESmoketestSubsystem();

    UFUNCTION(BlueprintCallable)
    void StartSmoketest(const FString& Filename);
    
    UFUNCTION()
    void ServerCheckServerLogMaxOccurrences(APlayerController* PC, int32 MaxOccurrences, const FString& SearchString);
    
    UFUNCTION()
    void ServerCheckServerLogIncludes(APlayerController* PC, const FString& SearchString, bool bExcludes);
    
    UFUNCTION()
    void ServerCheckBuildNumber(APlayerController* PC, int32 ClientBuildNumber);
    
    UFUNCTION()
    void OnGameModePostLogin(AGameModeBase* GameMode, APlayerController* NewPlayer);
    
private:
    UFUNCTION()
    int32 NumOccurrencesInLogfile(const FString& SearchString, TArray<FString>& FoundLines);
    
public:
    UFUNCTION()
    void Message(const FString& Text, bool bError, float TimeToDisplay);
    
private:
    UFUNCTION()
    bool LogFileIncludes(const FString& SearchString, bool bExclude);
    
    UFUNCTION()
    UUWESmoketestComp* GetSmoketestComponent();
    
    UFUNCTION()
    FString GetLogFileContents();
    
    UFUNCTION()
    UWorld* FindWorld();
    
    UFUNCTION()
    void FailSmoketest(const FString& Reason);
    
    UFUNCTION()
    void ExitProcess();
    
    UFUNCTION()
    void ExecuteStep(FUWESmoketestStep& Step);
    
    UFUNCTION()
    void DoFailSmoketest();
    
    UFUNCTION()
    void DoAdvanceStep();
    
public:
    UFUNCTION()
    void ClientCheckServerLogMaxOccurrencesResponse(bool bSuccess, int32 MaxOccurrences, int32 FoundOccurrences, const FString& SearchString, const TArray<FString>& FoundLines);
    
    UFUNCTION()
    void ClientCheckServerLogIncludesResponse(bool bSuccess, const FString& SearchString, bool bExcludes);
    
    UFUNCTION()
    void ClientCheckConnectedResponse();
    
    UFUNCTION()
    void ClientCheckBuildNumberResponse(bool bSuccess, int32 ServerBuildNumber);
    
private:
    UFUNCTION()
    void CancelAdvanceStep();
    
    UFUNCTION()
    void AdvanceStep(int32 NumSeconds);
    
};

