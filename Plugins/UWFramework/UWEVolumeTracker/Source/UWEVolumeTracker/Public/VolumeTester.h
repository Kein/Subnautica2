#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EVolumeType.h"
#include "VolumeTester.generated.h"

class UVolumeTrackerComponent;

UCLASS()
class UWEVOLUMETRACKER_API AVolumeTester : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UVolumeTrackerComponent* VolumeTracker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EVolumeType ExpectedType;
    
    AVolumeTester(const FObjectInitializer& ObjectInitializer);

};

