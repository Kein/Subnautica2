#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ShapeVolumeComponent.h"
#include "BoxVolumeComponent.generated.h"

class UMaterialInterface;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEVOLUMETRACKER_API UBoxVolumeComponent : public UShapeVolumeComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    FVector BoxExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInterface* Material;
    
public:
    UBoxVolumeComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetBoxExtent(FVector InBoxExtent, bool bUpdateOverlaps);
    
    UFUNCTION(BlueprintPure)
    FVector GetUnscaledBoxExtent() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetScaledBoxExtent() const;
    
};

