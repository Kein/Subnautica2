#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/StaticMeshComponent.h"
#include "UWESphereTransformed.h"
#include "TrackedVolume.h"
#include "TrackedVolumeData.h"
#include "StaticMeshVolumeComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEVOLUMETRACKER_API UStaticMeshVolumeComponent : public UStaticMeshComponent, public ITrackedVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTrackedVolumeData VolumeData;
    
    UStaticMeshVolumeComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    bool IsSphereFullyInside(const FUWESphereTransformed& Sphere);
    
    UFUNCTION(BlueprintPure)
    FTrackedVolumeData GetTrackedVolumeData() const;
    
    UFUNCTION(BlueprintPure)
    FBoxSphereBounds GetBounds() const;
    

    // Fix for true pure virtual functions not being implemented
};

