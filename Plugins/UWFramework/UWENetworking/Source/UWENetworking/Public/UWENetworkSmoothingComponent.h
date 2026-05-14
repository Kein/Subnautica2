#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UWENetworkSmoothingInterface.h"
#include "EUWENetworkSmoothingMode.h"
#include "EUWENetworkSmoothingTarget.h"
#include "UWENetworkSmoothingComponent.generated.h"

class USceneComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWENETWORKING_API UUWENetworkSmoothingComponent : public UActorComponent, public IUWENetworkSmoothingInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bEnableSmoothingInStandaloneOrListenServer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EUWENetworkSmoothingMode NetworkSmoothingMode;
    
    UPROPERTY(EditAnywhere)
    float NetworkMaxSmoothUpdateDistance;
    
    UPROPERTY(EditAnywhere)
    float NetworkNoSmoothUpdateDistance;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float NetworkSimulatedSmoothLocationTime;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float NetworkSimulatedSmoothRotationTime;
    
    UPROPERTY(EditDefaultsOnly)
    bool bSetFirstFoundMeshAsChildSmoothingTarget;
    
    UPROPERTY(EditDefaultsOnly)
    EUWENetworkSmoothingTarget NetworkSmoothingTarget;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleInstanceOnly)
    USceneComponent* VisualComponent;
    
    UPROPERTY(EditAnywhere)
    bool UseAdaptiveSmoothTime;
    
    UPROPERTY(EditAnywhere)
    float AdaptiveSmoothTimeCoefficient;
    
    UPROPERTY(EditAnywhere)
    float AdaptiveSmoothTimeSmoothingTime;
    
    UPROPERTY(EditAnywhere)
    bool EnableLocationExtrapolation;
    
    UPROPERTY(EditAnywhere)
    float LocationExtrapolationMaxDistanceSqr;
    
    UPROPERTY(EditAnywhere)
    bool SmoothExtrapolationVelocityChange;
    
    UPROPERTY(EditDefaultsOnly)
    bool UseInterpolationPath;
    
    UPROPERTY(EditDefaultsOnly)
    uint32 InterpolationPathCapacity;
    
    UPROPERTY(EditAnywhere)
    bool EnableSweepTest;
    
protected:
    UPROPERTY(Transient, VisibleInstanceOnly)
    float LastTransformUpdateInterval;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    float AdaptiveSmoothTime;
    
public:
    UUWENetworkSmoothingComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetVisualComponent(USceneComponent* InVisualComponent, bool ResetState);
    

    // Fix for true pure virtual functions not being implemented
};

