#pragma once
#include "CoreMinimal.h"
#include "ShapeVolumeComponent.h"
#include "SphereVolumeComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEVOLUMETRACKER_API USphereVolumeComponent : public UShapeVolumeComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    float SphereRadius;
    
public:
    USphereVolumeComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSphereRadius(float InSphereRadius, bool bUpdateOverlaps);
    
    UFUNCTION(BlueprintPure)
    float GetUnscaledSphereRadius() const;
    
    UFUNCTION(BlueprintPure)
    float GetShapeScale() const;
    
    UFUNCTION(BlueprintPure)
    float GetScaledSphereRadius() const;
    
};

