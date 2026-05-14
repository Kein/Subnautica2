#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EVolumeType.h"
#include "UWERestoreRotationComponent.generated.h"

class UVolumeTrackerComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEPHYSICS_API UUWERestoreRotationComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EVolumeType OnlyInVolumeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool RestorePitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PitchAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool RestoreRoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RollAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool RestoreYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float YawAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RestoreSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDisabledWhileAttached;
    
    UPROPERTY(Instanced)
    UVolumeTrackerComponent* VolumeTrackerCache;
    
public:
    UUWERestoreRotationComponent(const FObjectInitializer& ObjectInitializer);

};

