#pragma once
#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "SonarNewsfeedEntryResponse.h"
#include "FNewsfeedListStatus.h"
#include "UWENewsfeedListViewModel.generated.h"

class UObject;
class UUWENewsfeedEntryViewModel;
class UUWENewsfeedSubsystem;

UCLASS()
class UWENEWSFEED_API UUWENewsfeedListViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UUWENewsfeedSubsystem* NewsfeedSubsystem;
    
    UPROPERTY()
    TWeakObjectPtr<UObject> CachedWorldContext;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<UUWENewsfeedEntryViewModel*> NewsfeedEntries;
    
public:
    UUWENewsfeedListViewModel();

    UFUNCTION(BlueprintCallable)
    void UpdateLatestRead();
    
protected:
    UFUNCTION()
    void OnNewsfeedListStatusUpdated(FNewsfeedListStatus Status);
    
    UFUNCTION()
    void OnNewsfeedListRequested(bool bSuccess, TArray<FSonarNewsfeedEntryResponse> Response);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    bool Initialize(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    void GetNewsfeedList();
    
};

