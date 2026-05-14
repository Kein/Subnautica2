#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MVVMViewModelBase.h"
#include "SonarNewsfeedContent.h"
#include "SonarNewsfeedEntryResponse.h"
#include "UWENewsfeedEntryViewModel.generated.h"

class UObject;
class UTexture2D;
class UUWENewsfeedSubsystem;

UCLASS()
class UWENEWSFEED_API UUWENewsfeedEntryViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UUWENewsfeedSubsystem* NewsfeedSubsystem;
    
    UPROPERTY(BlueprintReadOnly)
    FString DocId;
    
    UPROPERTY(BlueprintReadOnly)
    FString Title;
    
    UPROPERTY(BlueprintReadOnly)
    FString ImageUrl;
    
    UPROPERTY(BlueprintReadOnly)
    UTexture2D* ThumbnailTexture;
    
    UPROPERTY(BlueprintReadOnly)
    FDateTime Date;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FSonarNewsfeedContent> Content;
    
    UPROPERTY(BlueprintReadOnly)
    bool DownloadCompleted;
    
    UPROPERTY(BlueprintReadOnly)
    bool ShowNewNotification;
    
public:
    UUWENewsfeedEntryViewModel();

protected:
    UFUNCTION()
    void OnNewsfeedEntryRequested(bool bSuccess, FSonarNewsfeedEntryResponse Response);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    bool Initialize(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    bool HasNewEntry();
    
    UFUNCTION(BlueprintCallable)
    void GetNewsfeedEntry(const FString& DocumentId);
    
    UFUNCTION(BlueprintCallable)
    void GetLatestNewsfeedEntry();
    
};

