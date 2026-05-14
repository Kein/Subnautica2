#pragma once
#include "CoreMinimal.h"
#include "UWEPrimaryDataAssetBase.h"
#include "UWEAIMovementEnvironmentSettings.generated.h"

UCLASS(DefaultToInstanced, EditInlineNew)
class UWEAIMOVEMENT_API UUWEAIMovementEnvironmentSettings : public UUWEPrimaryDataAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Density;
    
    UUWEAIMovementEnvironmentSettings();

};

