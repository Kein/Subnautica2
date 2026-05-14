#pragma once
#include "CoreMinimal.h"
#include "ShapeVolumeComponent.h"
#include "CapsuleVolumeComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEVOLUMETRACKER_API UCapsuleVolumeComponent : public UShapeVolumeComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    float CapsuleHalfHeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    float CapsuleRadius;
    
public:
    UCapsuleVolumeComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetCapsuleSize(float InRadius, float InHalfHeight, bool bUpdateOverlaps);
    
    UFUNCTION(BlueprintCallable)
    void SetCapsuleRadius(float Radius, bool bUpdateOverlaps);
    
    UFUNCTION(BlueprintCallable)
    void SetCapsuleHalfHeight(float HalfHeight, bool bUpdateOverlaps);
    
    UFUNCTION(BlueprintPure)
    float GetScaledCapsuleRadius() const;
    
    UFUNCTION(BlueprintPure)
    float GetScaledCapsuleHalfHeight() const;
    
};

