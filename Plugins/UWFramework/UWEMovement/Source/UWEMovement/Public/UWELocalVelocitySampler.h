#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "UWELocalVelocitySampler.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEMOVEMENT_API UUWELocalVelocitySampler : public USceneComponent {
    GENERATED_BODY()
public:
    UUWELocalVelocitySampler(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    float GetTransformSpeed() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetLocalVelocity() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetLocalAcceleration() const;
    
    UFUNCTION(BlueprintPure)
    float GetForwardAcceleration() const;
    
};

