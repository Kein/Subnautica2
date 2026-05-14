#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UWESimulationObject.h"
#include "UWEPowerNodeSimulation.generated.h"

class UUWEPowerNodeComponent;

UCLASS()
class UWEPOWER_API UUWEPowerNodeSimulation : public UUWESimulationObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUWEPowerNodeLinkDelegate, const FGuid&, LinkId);
    
    UPROPERTY(Transient)
    FString DebugOwnerActorName;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UUWEPowerNodeComponent> ComponentInstance;
    
    UPROPERTY(SaveGame)
    FVector ActorLocation;
    
    UPROPERTY(SaveGame)
    FVector TransmissionLocation;
    
    UPROPERTY(SaveGame)
    float TransmissionRadius;
    
    UPROPERTY(SaveGame)
    float Efficiency;
    
    UPROPERTY(SaveGame)
    bool bProximityTransmissionEnabled;
    
    UPROPERTY(SaveGame)
    FGuid PowerSystemId;
    
    UPROPERTY(SaveGame)
    TSet<FGuid> LinkIds;
    
    UPROPERTY()
    FUWEPowerNodeLinkDelegate OnLinkRemoved;
    
    UPROPERTY()
    FUWEPowerNodeLinkDelegate OnLinkAdded;
    
    UPROPERTY()
    FUWEPowerNodeLinkDelegate OnNewPowerSystem;
    
    UUWEPowerNodeSimulation();

};

