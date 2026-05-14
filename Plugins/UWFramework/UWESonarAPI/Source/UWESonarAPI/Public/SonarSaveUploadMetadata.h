#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SonarSaveUploadCustomInfo.h"
#include "SonarSaveUploadMetadata.generated.h"

USTRUCT(BlueprintType)
struct FSonarSaveUploadMetadata {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString DisplayName;
    
    UPROPERTY(BlueprintReadOnly)
    FString LevelName;
    
    UPROPERTY(BlueprintReadOnly)
    FString GameMode;
    
    UPROPERTY(BlueprintReadOnly)
    FDateTime CreatedAt;
    
    UPROPERTY(BlueprintReadOnly)
    FDateTime LastModified;
    
    UPROPERTY(BlueprintReadOnly)
    FGuid SaveId;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsMultiplayerSave;
    
    UPROPERTY(BlueprintReadOnly)
    int64 SaveGameSize;
    
    UPROPERTY(BlueprintReadOnly)
    int32 BuildNumber;
    
    UPROPERTY(BlueprintReadOnly)
    int32 Version;
    
    UPROPERTY(BlueprintReadOnly)
    int32 MajorVersion;
    
    UPROPERTY(BlueprintReadOnly)
    int32 ComparisonHash;
    
    UPROPERTY(BlueprintReadOnly)
    bool bWasMultiplayerSave;
    
    UPROPERTY(BlueprintReadOnly)
    bool bWasImported;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FSonarSaveUploadCustomInfo> CustomInfo;
    
    UWESONARAPI_API FSonarSaveUploadMetadata();
};

