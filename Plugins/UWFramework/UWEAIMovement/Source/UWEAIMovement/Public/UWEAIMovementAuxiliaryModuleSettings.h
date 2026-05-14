#pragma once
#include "CoreMinimal.h"
#include "UWEPrimaryDataAssetBase.h"
#include "UWEAIMovementAuxiliaryModuleSettings.generated.h"

UCLASS(Abstract)
class UWEAIMOVEMENT_API UUWEAIMovementAuxiliaryModuleSettings : public UUWEPrimaryDataAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsEnabled;
    
    UUWEAIMovementAuxiliaryModuleSettings();

};

