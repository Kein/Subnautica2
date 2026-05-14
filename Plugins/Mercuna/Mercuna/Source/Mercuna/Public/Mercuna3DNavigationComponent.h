#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/LatentActionManager.h"
#include "EMercunaAvoidanceMode.h"
#include "Mercuna3DNavigationConfiguration.h"
#include "MercunaNavigationComponent.h"
#include "MercunaUsageSpec.h"
#include "Mercuna3DNavigationComponent.generated.h"

class AActor;
class AMercunaNavOctree;
class UMercunaPath;
class UObject;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MERCUNA_API UMercuna3DNavigationComponent : public UMercunaNavigationComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMercuna3DNavigationConfiguration Configuration;
    
    UPROPERTY(EditAnywhere)
    AMercunaNavOctree* NavOctree;
    
    UPROPERTY(EditAnywhere)
    bool bAutomaticRadius;
    
    UPROPERTY(EditAnywhere)
    float NavigationRadius;
    
    UPROPERTY(EditAnywhere)
    bool Pathfinding;
    
public:
    UMercuna3DNavigationComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TrackActor(AActor* Actor, float Distance, float Speed, FVector Offset);
    
    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void SteeringParametersChanged();
    
    UFUNCTION(BlueprintCallable)
    void SetUsageSpec(FMercunaUsageSpec NewUsageSpec);
    
    UFUNCTION(BlueprintCallable)
    void SetNavOctreeToBest();
    
    UFUNCTION(BlueprintCallable)
    void SetNavOctree(AMercunaNavOctree* NewNavOctree);
    
    UFUNCTION(BlueprintCallable)
    void SetAvoidanceAgainst(AActor* Actor, bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void ResumeNavigation();
    
    UFUNCTION(BlueprintCallable)
    void PauseNavigation();
    
    UFUNCTION(BlueprintCallable)
    bool OverrideSpeedMultiplier(const float NewSpeedMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void MoveToLocations(const TArray<FVector>& Destinations, float EndDistance, float Speed, bool UsePartialPath);
    
    UFUNCTION(BlueprintCallable)
    void MoveToLocation(const FVector& Destination, float EndDistance, float Speed, bool UsePartialPath);
    
    UFUNCTION(BlueprintCallable)
    void MoveToActor(AActor* Actor, float EndDistance, float Speed, bool UsePartialPath);
    
    UFUNCTION(BlueprintCallable)
    void LookInDirection(FVector Direction, float MaxPitch);
    
    UFUNCTION(BlueprintCallable)
    void LookAt(AActor* Actor, float MaxPitch);
    
    UFUNCTION(BlueprintCallable)
    void LookAlongAcceleration(float MaxPitch);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    void IsReachable(FVector Point, bool& Success, UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void InvalidateContextualSteeringParamsAgainstActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void InvalidateContextualSteeringParams();
    
    UFUNCTION(BlueprintPure)
    FMercunaUsageSpec GetUsageSpec() const;
    
    UFUNCTION(BlueprintCallable)
    float GetRemainingPathLength();
    
    UFUNCTION(BlueprintCallable)
    void GetPathInfo(bool& Valid, float& DistanceToEnd);
    
    UFUNCTION(BlueprintPure)
    AMercunaNavOctree* GetNavOctree() const;
    
    UFUNCTION(BlueprintCallable)
    UMercunaPath* GetCurrentPath();
    
    UFUNCTION(BlueprintCallable)
    void ConfigureMovement(bool bUsePathfinding, EMercunaAvoidanceMode NewAvoidanceMode);
    
    UFUNCTION(BlueprintCallable)
    void Configure(const FMercuna3DNavigationConfiguration& NewConfiguration);
    
    UFUNCTION(BlueprintCallable)
    void ClearAvoidanceExclusions();
    
    UFUNCTION(BlueprintCallable)
    void CancelMovement();
    
    UFUNCTION(BlueprintCallable)
    void CancelLookAt();
    
    UFUNCTION(BlueprintCallable)
    void AddDestinationLocation(FVector NextDestination);
    
};

