#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "FNewsfeedListStatus.h"
#include "NewsfeedEntryDelegateDelegate.h"
#include "NewsfeedImageRetrievedDelegateDelegate.h"
#include "NewsfeedListDelegateDelegate.h"
#include "NewsfeedListStatusDelegateDelegate.h"
#include "UWENewsfeedSubsystem.generated.h"

class UImage;
class UUWENewsfeedListViewModel;

UCLASS(BlueprintType)
class UWENEWSFEED_API UUWENewsfeedSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FNewsfeedListDelegate OnNewsfeedListRequested;
    
    UPROPERTY(BlueprintAssignable)
    FNewsfeedEntryDelegate OnNewsfeedEntryRequested;
    
    UPROPERTY(BlueprintAssignable)
    FNewsfeedImageRetrievedDelegate OnNewsfeedImageRetrieved;
    
    UPROPERTY(BlueprintAssignable)
    FNewsfeedListStatusDelegate OnNewsfeedListStatus;
    
    UPROPERTY(BlueprintReadOnly)
    FNewsfeedListStatus NewsfeedStatus;
    
protected:
    UPROPERTY()
    UUWENewsfeedListViewModel* NewsfeedListViewModel;
    
public:
    UUWENewsfeedSubsystem();

    UFUNCTION(BlueprintCallable)
    void StartNewsfeedTimer();
    
    UFUNCTION(BlueprintCallable)
    void RetrieveImageAsync(const FString& ImageUrl, const UImage* Image);
    
    UFUNCTION(BlueprintCallable)
    void RetrieveImage(const FString& ImageUrl, const UImage* Image);
    
protected:
    UFUNCTION()
    void OnSonarConnectionChanged(bool bIsConnected);
    
public:
    UFUNCTION(BlueprintCallable)
    void GetSingleNewsfeedEntry(const FString& DocumentId);
    
    UFUNCTION(BlueprintCallable)
    void GetNewsfeedEntryList();
    
    UFUNCTION()
    void DownloadImage(const FString& ImageUrl);
    
};

