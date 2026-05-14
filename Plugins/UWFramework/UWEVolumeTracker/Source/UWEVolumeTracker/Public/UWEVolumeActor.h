#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Volume.h"
#include "TrackedVolumeData.h"
#include "UWEVolumeActor.generated.h"

class UUWEVolumeActorComponent;

UCLASS()
class UWEVOLUMETRACKER_API AUWEVolumeActor : public AVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Instanced)
    UUWEVolumeActorComponent* VolumeActorComponent;
    
public:
    AUWEVolumeActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    bool IsPointInVolume(const FVector& Point, float Radius) const;
    
    UFUNCTION()
    FTrackedVolumeData GetTrackedVolumeData() const;
    
};

