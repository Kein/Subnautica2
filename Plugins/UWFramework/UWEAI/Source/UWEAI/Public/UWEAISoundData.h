#pragma once
#include "CoreMinimal.h"
// FIXME
// stub
//#include "FMODOcclusionDetails.h"
//real:
#include "FMODAudioComponent.h"
#include "UWEAISoundData.generated.h"

class UFMODEvent;

USTRUCT(BlueprintType)
struct UWEAI_API FUWEAISoundData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UFMODEvent> Sound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FFMODOcclusionDetails OcclusionDetails;
    
    FUWEAISoundData();
};

