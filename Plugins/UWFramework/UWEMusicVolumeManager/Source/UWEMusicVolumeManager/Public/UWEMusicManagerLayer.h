#pragma once
#include "CoreMinimal.h"
#include "UWEMusicState.h"
#include "UWEMusicManagerLayer.generated.h"

class UFMODEvent;
class UUWEMusicVolumeComponent;

USTRUCT(BlueprintType)
struct FUWEMusicManagerLayer {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    TArray<TWeakObjectPtr<UUWEMusicVolumeComponent>> MusicVolumeComponents;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    FUWEMusicState State;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UFMODEvent* DefaultEvent;
    
    UWEMUSICVOLUMEMANAGER_API FUWEMusicManagerLayer();
};

