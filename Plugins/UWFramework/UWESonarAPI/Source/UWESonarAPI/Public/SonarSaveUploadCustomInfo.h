#pragma once
#include "CoreMinimal.h"
#include "SonarSaveUploadCustomInfo.generated.h"

USTRUCT(BlueprintType)
struct FSonarSaveUploadCustomInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString Name;
    
    UPROPERTY(BlueprintReadOnly)
    FString Value;
    
    UWESONARAPI_API FSonarSaveUploadCustomInfo();
};

