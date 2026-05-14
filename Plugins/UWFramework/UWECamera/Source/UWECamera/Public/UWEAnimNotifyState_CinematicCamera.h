#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "UWEAnimNotifyState_CinematicCamera.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UWECAMERA_API UUWEAnimNotifyState_CinematicCamera : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bAnimateRotation;
    
    UPROPERTY(EditAnywhere)
    bool bAnimateLocation;
    
    UPROPERTY(EditAnywhere)
    float TransitionTime;
    
    UUWEAnimNotifyState_CinematicCamera();

};

