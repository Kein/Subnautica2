#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UWEGenericObjectSaveDataContainer.h"
#include "UWESaveCallbacks.h"
#include "UWEServerWorldSubsystem.h"
#include "UWESimulationTickEvent.h"
#include "UWEGlobalSimulationSubsystem.generated.h"

class UUWESaveHandle;
class UUWESimulationObject;

UCLASS()
class UWEGLOBALSIMULATION_API UUWEGlobalSimulationSubsystem : public UUWEServerWorldSubsystem, public IUWESaveCallbacks {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UUWESaveHandle* SaveHandle;
    
    UPROPERTY(Transient)
    TMap<FGuid, UUWESimulationObject*> SimulationObjects;
    
    UPROPERTY(Transient)
    TArray<FUWESimulationTickEvent> SimulationTickEvents;
    
    UPROPERTY(SaveGame)
    FUWEGenericObjectSaveDataContainer SimulationObjectsSaveData;
    
public:
    UUWEGlobalSimulationSubsystem();


    // Fix for true pure virtual functions not being implemented
};

