#pragma once
#include "CoreMinimal.h"
#include "UWEPrimaryDataAssetBase.h"
#include "UWEAudioZoneDataAsset.generated.h"

class UFMODEvent;

UCLASS()
class UWEAUDIO_API UUWEAudioZoneDataAsset : public UUWEPrimaryDataAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UFMODEvent> AmbientAudio;
    
    UUWEAudioZoneDataAsset();

};

