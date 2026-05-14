#pragma once
#include "CoreMinimal.h"
#include "FMODAnimNotifyPlay.h"
//FIXME
// stub
//#include "FMODOcclusionDetails.h"
//real fmod
#include "FMODAudioComponent.h"
#include "UWEFMODAnimNotifyPlay.generated.h"

UCLASS(CollapseCategories)
class UWEAUDIO_API UUWEFMODAnimNotifyPlay : public UFMODAnimNotifyPlay {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FFMODOcclusionDetails OcclusionDetails;
    
    UUWEFMODAnimNotifyPlay();

};

