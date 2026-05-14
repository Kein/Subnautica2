#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UWEMercunaNavExclusionVolumeComponent.generated.h"

class AMercunaNavExclusionVolume;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEMERCUNA_API UUWEMercunaNavExclusionVolumeComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool RebuildAutomatically;
    
    UPROPERTY(EditAnywhere)
    bool BoundCalculationIncludeNonColliding;
    
    UPROPERTY(EditAnywhere)
    bool BoundCalculationIncludeFromChildActors;
    
protected:
    UPROPERTY()
    AMercunaNavExclusionVolume* ExclusionVolumeActor;
    
public:
    UUWEMercunaNavExclusionVolumeComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RebuildNavigationData();
    
    UFUNCTION(BlueprintPure)
    bool IsVolumeCreated() const;
    
    UFUNCTION(BlueprintPure)
    AMercunaNavExclusionVolume* GetExclusionVolumeActor() const;
    
    UFUNCTION(BlueprintCallable)
    void DestroyVolume();
    
    UFUNCTION(BlueprintCallable)
    void CreateVolume();
    
};

