#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EBiomeRegionType.h"
#include "EBiomeRegionVolumeType.h"
#include "UWEWaterLightSettings.h"
#include "UWEWaterBiomeRegionActor.generated.h"

class UBoxVolumeComponent;
class UBrushVolumeComponent;
class UModel;
class UStaticMesh;
class UStaticMeshComponent;
class UUWEBiomePostProcessComponent;
class UUWEBiomeVolumeComponent;

UCLASS(Abstract, HideDropdown)
class UWEWATER_API AUWEWaterBiomeRegionActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EBiomeRegionType BiomeRegionType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bHasWaterSurface;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bMaskOceanSurface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UStaticMeshComponent* WaterSurfaceMeshComponent;
    
    UPROPERTY()
    EBiomeRegionVolumeType BiomeRegionVolumeType;
    
    UPROPERTY()
    uint8 bUseDistanceFieldMask: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bIsOcean: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FUWEWaterLightSettings WaterLightingSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UStaticMeshComponent* WaterStaticMeshComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UBrushVolumeComponent* WaterBrushVolumeComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UBoxVolumeComponent* WaterBoxVolumeComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UUWEBiomeVolumeComponent* BiomeVolumeComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UUWEBiomePostProcessComponent* PostProcessComponent;
    
    UPROPERTY(EditAnywhere, Instanced)
    UModel* InternalVolumeModel;
    
    UPROPERTY(Instanced)
    UStaticMesh* InternalVolumeMesh;
    
    UPROPERTY(Instanced)
    UStaticMesh* InternalWaterPlaneMesh;
    
    UPROPERTY()
    TArray<FName> UserDefinedProperties;
    
public:
    AUWEWaterBiomeRegionActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SetWaterFogOpacityWeight(float Value);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetupAirVolume();
    
protected:
    UFUNCTION()
    void SetAirLightSettings();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RecreateMaterials();
    
};

