#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SonarSaveUploadMetadata.h"
#include "SonarSaveGameResponse.generated.h"

USTRUCT(BlueprintType)
struct FSonarSaveGameResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FSonarSaveUploadMetadata SaveMetaData;
    
    UPROPERTY(BlueprintReadOnly)
    FString SaveId;
    
    UPROPERTY(BlueprintReadOnly)
    FString S3Filename;
    
    UPROPERTY(BlueprintReadOnly)
    int32 SaveOwnerSonarPlayerId;
    
    UPROPERTY(BlueprintReadOnly)
    FString ShareCode;
    
    UPROPERTY(BlueprintReadOnly)
    FString S3Url;
    
    UPROPERTY(BlueprintReadOnly)
    FString UrlType;
    
    UPROPERTY(BlueprintReadOnly)
    FDateTime LastUpdateTime;
    
    UPROPERTY(BlueprintReadOnly)
    FDateTime ExpirationTime;
    
    UPROPERTY(BlueprintReadOnly)
    FDateTime CreationTime;
    
    UWESONARAPI_API FSonarSaveGameResponse();
};

