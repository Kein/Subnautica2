#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "EAnchorOrientation.h"
#include "UWEPlacementAnchor.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API UUWEPlacementAnchor : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    EAnchorOrientation orientation;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool UseForSamplePoints;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float SampleRadius;
    
    UUWEPlacementAnchor(const FObjectInitializer& ObjectInitializer);

};

