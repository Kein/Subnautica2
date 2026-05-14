#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "UWEWaterVolumeSettings.h"
#include "UWEBiomeMapComponent.generated.h"

class UTextureRenderTarget2D;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEWATER_API UUWEBiomeMapComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CaptureRadius;
    
    UPROPERTY(BlueprintReadOnly, DuplicateTransient, Transient, VisibleAnywhere)
    UTextureRenderTarget2D* RenderTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FUWEWaterVolumeSettings DefaultVolumeSettings;
    
    UPROPERTY(BlueprintReadOnly)
    FVector4 WorldToBiomeMapScaleAndOffset;
    
    UUWEBiomeMapComponent(const FObjectInitializer& ObjectInitializer);

};

