#pragma once
#include "CoreMinimal.h"
#include "GPPModelsCheckAppVersionUpdateResult_NoNameEncryption.generated.h"

USTRUCT()
struct GPP_API FGPPModelsCheckAppVersionUpdateResult_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool UpdateAvailable;
    
    UPROPERTY(EditAnywhere)
    bool Mandatory;
    
    UPROPERTY(EditAnywhere)
    bool ShowOptionalUpdate;
    
    UPROPERTY(EditAnywhere)
    FString LatestVersion;
    
    UPROPERTY(EditAnywhere)
    FString Message;
    
    UPROPERTY(EditAnywhere)
    FString URL;
    
    FGPPModelsCheckAppVersionUpdateResult_NoNameEncryption();
};

