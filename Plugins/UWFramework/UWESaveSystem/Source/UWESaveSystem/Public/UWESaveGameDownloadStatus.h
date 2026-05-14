#pragma once
#include "CoreMinimal.h"
#include "UWESaveGameDownloadStatus.generated.h"

USTRUCT(BlueprintType)
struct FUWESaveGameDownloadStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool bSuccess;
    
    UPROPERTY(BlueprintReadOnly)
    FText ErrorMessage;
    
    UWESAVESYSTEM_API FUWESaveGameDownloadStatus();
};

