#pragma once
#include "CoreMinimal.h"
#include "UWEPlayerTriggerAction.h"
#include "UWEPlayCameraShakeAction.generated.h"

class UCameraShakeBase;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWETRIGGER_API UUWEPlayCameraShakeAction : public UUWEPlayerTriggerAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UCameraShakeBase> CameraShake;
    
    UPROPERTY(EditAnywhere)
    float InnerAttenuationRadius;
    
    UPROPERTY(EditAnywhere)
    float OuterAttenuationRadius;
    
public:
    UUWEPlayCameraShakeAction(const FObjectInitializer& ObjectInitializer);

};

