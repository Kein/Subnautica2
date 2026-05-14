#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UWEOverlapWaterCurrent.h"
#include "UWESplineWaterCurrentMeshGenerationSettings.h"
#include "UWESplineWaterCurrentRadius.h"
#include "UWESplineWaterCurrent.generated.h"

class UDynamicMeshComponent;
class USplineComponent;
class UStaticMeshComponent;
class UUWESplineWaterCurrentTierSettings;
class UUWESplineWaterCurrentVelocitySettings;
class UUWESplineWaterCurrentVisualizer;

UCLASS()
class UWEWATERCURRENTS_API AUWESplineWaterCurrent : public AUWEOverlapWaterCurrent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USplineComponent* SplineComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UDynamicMeshComponent* DynamicMeshComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UStaticMeshComponent* StaticMeshComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UUWESplineWaterCurrentVisualizer* EditorVisualizer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FUWESplineWaterCurrentRadius Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool LoadTierSettingsFromFile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NoClear)
    UUWESplineWaterCurrentTierSettings* TierSettingsInstanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UUWESplineWaterCurrentTierSettings* TierSettingsFromFile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool LoadVelocitySettingsFromFile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NoClear)
    UUWESplineWaterCurrentVelocitySettings* VelocitySettingsInstanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UUWESplineWaterCurrentVelocitySettings* VelocitySettingsFromFile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FUWESplineWaterCurrentMeshGenerationSettings MeshGenerationSettings;
    
    AUWESplineWaterCurrent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetBaseRadius(float BaseRadius);
    
    UFUNCTION(BlueprintCallable)
    UUWESplineWaterCurrentVelocitySettings* GetVelocitySettingsBP();
    
    UFUNCTION(BlueprintCallable)
    FVector GetVelocityAtSplineDurationProportion(float SplineDurationProportion);
    
    UFUNCTION(BlueprintCallable)
    FVector GetVelocityAtSplineDistance(float SplineDistance);
    
    UFUNCTION(BlueprintCallable)
    UUWESplineWaterCurrentTierSettings* GetTierSettingsBP();
    
    UFUNCTION(BlueprintCallable)
    int32 GetMeshSegmentsCountAlongLength();
    
    UFUNCTION(BlueprintCallable)
    float GetMaxSpeed();
    
    UFUNCTION(BlueprintCallable)
    float GetBaseRadius();
    
};

