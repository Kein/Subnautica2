#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EUWEMusicVolumeLayer.h"
#include "UWEMusicManagerLayer.h"
#include "UWEMusicManagerComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEMUSICVOLUMEMANAGER_API UUWEMusicManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<EUWEMusicVolumeLayer, FUWEMusicManagerLayer> Layers;
    
    UUWEMusicManagerComponent(const FObjectInitializer& ObjectInitializer);

};

