#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SonarSaveUploadMetadata.h"
#include "SonarUploadSaveRequest.generated.h"

USTRUCT()
struct FSonarUploadSaveRequest {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid save_id;
    
    UPROPERTY()
    FSonarSaveUploadMetadata save_metadata;
    
    UWESONARAPI_API FSonarUploadSaveRequest();
};

