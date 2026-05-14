#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
// stub
//#include "FMODEventInstance.h"
//#include "FMODOcclusionDetails.h"
// real fmod
#include "FMODBlueprintStatics.h"
#include "FMODAudioComponent.h"
#include "UWEAudioStatics.generated.h"

class AActor;
class UFMODAudioComponent;
class UFMODEvent;

UCLASS(BlueprintType)
class UWEAUDIO_API UUWEAudioStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUWEAudioStatics();

    UFUNCTION(BlueprintCallable)
    static void SetOcclusionOnInstance(UFMODEvent* FMODEvent, FFMODEventInstance& EventInstance, FVector SpawnLocation, AActor* ActorToIgnore, const FFMODOcclusionDetails& OcclusionDetails);
    
    UFUNCTION(BlueprintCallable)
    static void SetOcclusionDetails(UFMODAudioComponent* AudioComponent, const FFMODOcclusionDetails& OcclusionDetails);
    
};

