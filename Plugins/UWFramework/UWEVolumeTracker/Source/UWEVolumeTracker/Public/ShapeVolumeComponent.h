#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ShapeComponent.h"
#include "UWESphereTransformed.h"
#include "TrackedVolume.h"
#include "TrackedVolumeData.h"
#include "ShapeVolumeComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEVOLUMETRACKER_API UShapeVolumeComponent : public UShapeComponent, public ITrackedVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTrackedVolumeData VolumeData;
    
    UShapeVolumeComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    bool IsSphereFullyInside(const FUWESphereTransformed& Sphere);
    
    UFUNCTION(BlueprintPure)
    FTrackedVolumeData GetTrackedVolumeData() const;
    
    UFUNCTION(BlueprintPure)
    FBoxSphereBounds GetBounds() const;
    

    // Fix for true pure virtual functions not being implemented
};

