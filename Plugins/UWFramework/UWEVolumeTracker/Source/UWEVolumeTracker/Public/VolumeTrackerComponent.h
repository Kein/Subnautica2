#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/HitResult.h"
#include "Components/SceneComponent.h"
#include "EUWEVolumeTrackerQueryMode.h"
#include "EUWEVolumeTrackerUpdateVolumesMode.h"
#include "EVolumeType.h"
#include "VolumeQueryResult.h"
#include "VolumeTrackerComponent.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEVOLUMETRACKER_API UVolumeTrackerComponent : public USceneComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnVolumeTypeChangedDelegate, EVolumeType, VolumeType);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnVolumeExitDelegate, EVolumeType, VolumeType);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnVolumeEnterDelegate, EVolumeType, VolumeType);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCurrentVolumeChangedDelegate);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EUWEVolumeTrackerQueryMode QueryMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EUWEVolumeTrackerUpdateVolumesMode UpdateVolumesMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EmulateNativeOverlapEventsForRootComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TrackerRadius;
    
    UPROPERTY(BlueprintAssignable)
    FOnVolumeTypeChangedDelegate OnVolumeTypeChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnVolumeEnterDelegate OnVolumeEnterEvent;
    
    UPROPERTY(BlueprintAssignable)
    FOnVolumeExitDelegate OnVolumeExitEvent;
    
    UPROPERTY(BlueprintAssignable)
    FOnCurrentVolumeChangedDelegate OnCurrentVolumeChanged;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FVolumeQueryResult VolumeQueryResult;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool IsDefaultEnabled;
    
    UVolumeTrackerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateVolumes();
    
protected:
    UFUNCTION()
    void OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsInWaterCurrent() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInWater() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetWaterLine() const;
    
    UFUNCTION(BlueprintPure)
    float GetDepthInOcean() const;
    
    UFUNCTION(BlueprintPure)
    float GetDepth() const;
    
    UFUNCTION(BlueprintPure)
    EVolumeType GetCurrentVolumeType() const;
    
};

