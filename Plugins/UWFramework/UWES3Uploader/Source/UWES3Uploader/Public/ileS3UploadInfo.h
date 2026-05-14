#pragma once
#include "CoreMinimal.h"
#include "S3UploadStatus.h"
#include "ileS3UploadInfo.generated.h"

USTRUCT()
struct UWES3UPLOADER_API FileS3UploadInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString LocalFilename;
    
    UPROPERTY()
    FString S3BaseUrl;
    
    UPROPERTY()
    FString Key;
    
    UPROPERTY()
    FString URL;
    
    UPROPERTY()
    TMap<FString, FString> Fields;
    
    UPROPERTY()
    S3UploadStatus Status;
    
    FileS3UploadInfo();
};

