#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
// FIXME
// stub
//#include "FMODOcclusionDetails.h"
// real
#include "FMODAudioComponent.h"
#include "GameplayTagContainer.h"
#include "UWEBTSPlaySound.generated.h"

UCLASS()
class UWEAI_API UUWEBTSPlaySound : public UBTService {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTag SoundTag;
    
    UPROPERTY(EditAnywhere)
    bool bLoop;
    
    UPROPERTY(EditAnywhere)
    FFMODOcclusionDetails OcclusionDetails;
    
    UUWEBTSPlaySound();

};

