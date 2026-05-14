#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EMercunaAvoidanceMode.h"
#include "Mercuna2DNavigationComponent.h"
#include "MercunaPathNavLinkInfo.h"
#include "MercunaSurfaceAgentType.h"
#include "MercunaSurfaceNavigationConfiguration.h"
#include "MercunaSurfaceNavigationDynamicSteeringParameters.h"
#include "MercunaSurfaceNavigationSteeringParameters.h"
#include "MercunaUsageSpec.h"
#include "MercunaSurfaceNavigationComponent.generated.h"

class AActor;
class AMercunaNavSurfaceGrid;
class UMercunaNavLinkComponent;
class UMercunaPath;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MERCUNA_API UMercunaSurfaceNavigationComponent : public UMercuna2DNavigationComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    AMercunaNavSurfaceGrid* NavSurfaceGrid;
    
    UPROPERTY(EditAnywhere)
    FMercunaSurfaceAgentType AgentType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bAutomaticSteeringParameters;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMercunaSurfaceNavigationSteeringParameters SteeringParameters;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMercunaSurfaceNavigationConfiguration Configuration;
    
public:
    UMercunaSurfaceNavigationComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateDynamicSteeringParams(const FMercunaSurfaceNavigationDynamicSteeringParameters& NewDynamicSteeringParams);
    
    UFUNCTION(BlueprintCallable)
    void TrackActor(AActor* Actor, float Distance, float Speed, FVector Offset, bool UsePartialPath, bool bUseEndActorOrientation);
    
    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void SteeringParametersChanged();
    
    UFUNCTION(BlueprintCallable)
    void SetUsageSpec(FMercunaUsageSpec NewUsageSpec);
    
    UFUNCTION(BlueprintCallable)
    void SetNavGridToBest();
    
    UFUNCTION(BlueprintCallable)
    void SetNavGrid(AMercunaNavSurfaceGrid* NewNavSurfaceGrid);
    
    UFUNCTION(BlueprintCallable)
    void SetAvoidanceAgainst(AActor* Actor, bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetAgentType(FMercunaSurfaceAgentType NewAgentType);
    
    UFUNCTION(BlueprintCallable)
    void ResumeNavigation();
    
    UFUNCTION(BlueprintCallable)
    void PauseNavigation();
    
    UFUNCTION(BlueprintCallable)
    bool OverrideSpeedMultiplier(const float NewSpeedMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void NavLinkComplete();
    
    UFUNCTION(BlueprintCallable)
    void MoveToLocations(const TArray<FVector>& Destinations, FVector EndDirection, float EndDistance, float Speed, bool UsePartialPath);
    
    UFUNCTION(BlueprintCallable)
    void MoveToLocation(const FVector& Destination, FVector EndDirection, float EndDistance, float Speed, bool UsePartialPath);
    
    UFUNCTION(BlueprintCallable)
    void MoveToActor(AActor* Actor, float EndDistance, float Speed, bool UsePartialPath, bool bUseEndActorOrientation);
    
    UFUNCTION(BlueprintCallable)
    void InvalidateContextualSteeringParamsAgainstActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void InvalidateContextualSteeringParams();
    
    UFUNCTION(BlueprintPure)
    FMercunaUsageSpec GetUsageSpec() const;
    
    UFUNCTION(BlueprintPure)
    FMercunaSurfaceAgentType GetSurfaceAgentType() const;
    
    UFUNCTION(BlueprintPure)
    FMercunaSurfaceNavigationSteeringParameters GetSteeringParameters() const;
    
    UFUNCTION(BlueprintCallable)
    float GetRemainingPathLength();
    
    UFUNCTION(BlueprintCallable)
    void GetPathInfo(bool& Valid, float& DistanceToEnd);
    
    UFUNCTION(BlueprintPure)
    void GetNextNavLinkInfo(bool& bNextNavLinkFound, float& DistanceToNextNavLink, float& TimeToNextNavLink, FMercunaPathNavLinkInfo& NavLinkInfo, float MaxLookAhead) const;
    
    UFUNCTION(BlueprintPure)
    void GetNextNavLink(bool& bNextNavLinkFound, float& DistanceToNextNavLink, float& TimeToNextNavLink, FVector& TraversalStart, FVector& TraversalEnd, AActor*& NavLinkActor, UMercunaNavLinkComponent*& NavLinkComponent, float MaxLookAhead) const;
    
    UFUNCTION(BlueprintPure)
    AMercunaNavSurfaceGrid* GetNavGrid() const;
    
    UFUNCTION(BlueprintCallable)
    FVector GetLookDirection();
    
    UFUNCTION(BlueprintPure)
    FMercunaSurfaceNavigationDynamicSteeringParameters GetDynamicSteeringParameters() const;
    
    UFUNCTION(BlueprintCallable)
    UMercunaPath* GetCurrentPath();
    
    UFUNCTION(BlueprintPure)
    FMercunaSurfaceNavigationConfiguration GetConfiguration() const;
    
    UFUNCTION(BlueprintCallable)
    void ConfigureSteering(const FMercunaSurfaceNavigationSteeringParameters& NewSteering);
    
    UFUNCTION(BlueprintCallable)
    void ConfigureMovement(EMercunaAvoidanceMode NewAvoidanceMode);
    
    UFUNCTION(BlueprintCallable)
    void Configure(const FMercunaSurfaceNavigationConfiguration& NewConfiguration);
    
    UFUNCTION(BlueprintCallable)
    void ClearAvoidanceExclusions();
    
    UFUNCTION(BlueprintCallable)
    void CancelMovement();
    
    UFUNCTION(BlueprintCallable)
    void AddDestinationLocation(FVector NextDestination, bool bSmoothTransition);
    
};

