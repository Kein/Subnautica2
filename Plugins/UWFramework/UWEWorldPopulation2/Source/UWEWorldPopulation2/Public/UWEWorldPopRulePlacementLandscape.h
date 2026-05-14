#pragma once
#include "CoreMinimal.h"
#include "UWEWorldPopRulePlacement.h"
#include "UWEWorldPopRulePlacementLandscape.generated.h"

class ULandscapeLayerInfoObject;
class UUWELandscapeMappingDA;

UCLASS(EditInlineNew)
class UWEWORLDPOPULATION2_API UUWEWorldPopRulePlacementLandscape : public UUWEWorldPopRulePlacement {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<ULandscapeLayerInfoObject> LandscapeLayerToPlaceOn;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UUWELandscapeMappingDA> LandscapeMappingsToPlaceOn;
    
    UUWEWorldPopRulePlacementLandscape();

};

