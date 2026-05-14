#pragma once
#include "CoreMinimal.h"
#include "UWEPrimaryDataAssetBase.h"
#include "SensorConfiguration.h"
#include "Templates/SubclassOf.h"
#include "UWEStimulusDataAsset.generated.h"

class UGameplayEffect;

UCLASS()
class UWESTIMULUSSYSTEM_API UUWEStimulusDataAsset : public UUWEPrimaryDataAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FSensorConfiguration> Sensors;
    
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<UGameplayEffect>> StimulusEmitters;
    
    UUWEStimulusDataAsset();

};

