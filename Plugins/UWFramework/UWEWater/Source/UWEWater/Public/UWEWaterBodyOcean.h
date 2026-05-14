#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WaterBodyOceanActor.h"
#include "UWEWaterLightSettings.h"
#include "UWEWaterBodyOcean.generated.h"

class UChildActorComponent;

UCLASS(Abstract)
class UWEWATER_API AUWEWaterBodyOcean : public AWaterBodyOcean {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleDefaultsOnly)
    UChildActorComponent* WaterVolumeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FUWEWaterLightSettings WaterLightingSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WaterLinePPMThreshold;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector BodySize;
    
    UPROPERTY(Transient)
    bool bDirty;
    
    AUWEWaterBodyOcean(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintNativeEvent)
    void PropagateToChildActors();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnUnderwaterBlurChanged(bool bEnabled);
    
    UFUNCTION(BlueprintImplementableEvent)
    void EditorTick(float DeltaTime);
    
};

