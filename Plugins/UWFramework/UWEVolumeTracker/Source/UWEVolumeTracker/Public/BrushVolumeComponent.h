#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
// FIXME: ENGINE CHANGES:
//#include "Components/BrushComponent.h"
#include "Components/PrimitiveComponent.h"
#include "UWESphereTransformed.h"
#include "TrackedVolume.h"
#include "TrackedVolumeData.h"
#include "BrushVolumeComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEVOLUMETRACKER_API UBrushVolumeComponent : public UPrimitiveComponent, public ITrackedVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTrackedVolumeData VolumeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FColor WireColor;
    
    UBrushVolumeComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    bool IsSphereFullyInside(const FUWESphereTransformed& Sphere);
    
    UFUNCTION(BlueprintPure)
    FTrackedVolumeData GetTrackedVolumeData() const;
    
    UFUNCTION(BlueprintPure)
    FBoxSphereBounds GetBounds() const;
    

    // Fix for true pure virtual functions not being implemented
};

