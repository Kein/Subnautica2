#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "UWESaveObject.h"
#include "UWEBuilderItemRemovalHandlerInterface.h"
#include "OnDirectLinkAddedDelegate.h"
#include "OnDirectLinkRemovedDelegate.h"
#include "OnNetworkChangedDelegate.h"
#include "UWEPowerNodeComponent.generated.h"

class AActor;
class UChildActorComponent;
class UObject;
class UUWEPowerNodeComponent;
class UUWEPowerNodeSimulation;
class UUWEPowerSystemComponent;
class UUWESaveHandle;

UCLASS(BlueprintType, DefaultConfig, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class UWEPOWER_API UUWEPowerNodeComponent : public UActorComponent, public IUWESaveObject, public IUWEBuilderItemRemovalHandlerInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInitNewPowerSimulation, UUWEPowerNodeSimulation*, NewSim);
    
    UPROPERTY(BlueprintAssignable)
    FOnNetworkChanged OnNetworkChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnDirectLinkAdded OnDirectLinkAdded;
    
    UPROPERTY(BlueprintAssignable)
    FOnDirectLinkRemoved OnDirectLinkRemoved;
    
    UPROPERTY(BlueprintAssignable)
    FOnInitNewPowerSimulation OnInitNewPowerSimulation;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bProximityTransmissionEnabled;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float TransmissionRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector TransmissionPointOffset;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    TSet<UUWEPowerNodeComponent*> DirectLinks;
    
    UPROPERTY(Instanced, ReplicatedUsing=OnRep_DirectLinks)
    TArray<UUWEPowerNodeComponent*> DirectLinksArray;
    
    UPROPERTY(SaveGame)
    FGuid SimulationId;
    
    UPROPERTY()
    UUWESaveHandle* SaveHandle;
    
    UPROPERTY(Transient)
    UUWEPowerNodeSimulation* Simulation;
    
    UPROPERTY(BlueprintReadOnly, Instanced, Transient)
    UUWEPowerSystemComponent* PowerSystem;
    
    UPROPERTY(Transient)
    AActor* PowerSystemProviderActor;
    
public:
    UUWEPowerNodeComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION()
    void UpdatePowerSystem(int32 NewStructureId);
    
    UFUNCTION()
    void UpdateNetwork(TSet<UUWEPowerNodeComponent*>& Visited);
    
    UFUNCTION(BlueprintCallable)
    void SetProximityTransmissionEnabled(bool Enabled);
    
protected:
    UFUNCTION()
    void OnRep_DirectLinks();
    
    UFUNCTION()
    void OnNewPowerSystem(const FGuid& SystemId);
    
    UFUNCTION()
    void OnLinkRemoved(const FGuid& FromLinkId);
    
    UFUNCTION()
    void OnLinkCreated(const FGuid& ToLinkId);
    
    UFUNCTION()
    void OnBlockedLinkChanged(UUWEPowerNodeComponent* node, bool IsBlocked);
    
public:
    UFUNCTION(BlueprintCallable)
    static void LinkChildActorPowerNodesToRoot(TArray<UChildActorComponent*> ChildActors, AActor* Other);
    
    UFUNCTION(BlueprintCallable)
    static void LinkAttachedActorPowerNodesToRoot(TArray<AActor*> AttachedActors, AActor* Root);
    
protected:
    UFUNCTION(BlueprintPure)
    FVector GetWorldTransmissionLocation() const;
    
public:
    UFUNCTION(BlueprintPure)
    UUWEPowerNodeSimulation* GetSimulationObject() const;
    
    UFUNCTION(BlueprintPure)
    bool GetProximityTransmissionEnabled() const;
    
protected:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TSet<UUWEPowerNodeComponent*> GetProximityLinksByOverlap(const UObject* WorldContextObject, const FVector& Location, float Radius, bool ExcludeBlocked);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TSet<UUWEPowerNodeComponent*> GetProximityLinks(const UObject* WorldContextObject, const FVector& Location, float Radius, bool ExcludeBlocked);
    
public:
    UFUNCTION(BlueprintPure)
    UUWEPowerSystemComponent* GetPowerSystem() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void GetOrCreateSimulationObject();
    
public:
    UFUNCTION()
    float GetEfficiency() const;
    
    UFUNCTION(BlueprintCallable)
    void CreateLinkToComponent(UUWEPowerNodeComponent* OtherComponent);
    
    UFUNCTION(BlueprintCallable)
    void CreateLink(AActor* Other);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ClearLinks();
    
    UFUNCTION(BlueprintCallable)
    void CheckForProximityLinks();
    

    // Fix for true pure virtual functions not being implemented
};

