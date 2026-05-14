#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Interface.h"
#include "UWESphereTransformed.h"
#include "TrackedVolumeData.h"
#include "TrackedVolume.generated.h"

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class UWEVOLUMETRACKER_API UTrackedVolume : public UInterface {
    GENERATED_BODY()
};

class UWEVOLUMETRACKER_API ITrackedVolume : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual bool IsSphereFullyInside(const FUWESphereTransformed& Sphere) PURE_VIRTUAL(IsSphereFullyInside, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual FTrackedVolumeData GetTrackedVolumeData() const PURE_VIRTUAL(GetTrackedVolumeData, return FTrackedVolumeData{};);
    
    UFUNCTION(BlueprintCallable)
    virtual FBoxSphereBounds GetBounds() const PURE_VIRTUAL(GetBounds, return FBoxSphereBounds{};);
    
};

