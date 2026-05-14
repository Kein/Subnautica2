#pragma once
#include "CoreMinimal.h"
#include "S3UploadStatus.generated.h"

UENUM(BlueprintType)
enum class S3UploadStatus : uint8 {
    PENDING,
    SUCCESS,
    FAILURE,
};

