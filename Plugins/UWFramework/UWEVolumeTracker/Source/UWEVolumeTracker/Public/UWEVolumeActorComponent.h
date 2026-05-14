#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "UWESphereTransformed.h"
#include "OnVolumeDataChangedDelegate.h"
#include "TrackedVolume.h"
#include "TrackedVolumeData.h"
#include "UWEVolumeActorComponent.generated.h"

class UPrimitiveComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEVOLUMETRACKER_API UUWEVolumeActorComponent : public UActorComponent, public ITrackedVolume {
    GENERATED_BODY()
public:
    UPROPERTY()
    FOnVolumeDataChanged OnVolumeDataChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTrackedVolumeData VolumeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UPrimitiveComponent* TargetComponent;
    
public:
    UUWEVolumeActorComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    bool IsSphereFullyInside(const FUWESphereTransformed& Sphere);
    
    UFUNCTION(BlueprintPure)
    FTrackedVolumeData GetTrackedVolumeData() const;
    
    UFUNCTION(BlueprintPure)
    FBoxSphereBounds GetBounds() const;
    

    // Fix for true pure virtual functions not being implemented
};

