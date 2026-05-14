#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "UWEBiomeTrackerSubsystem.generated.h"

class AUWESkyActor;
class UMaterialParameterCollection;
class UNiagaraParameterCollection;
class UUWEBiomeVolumeComponent;

UCLASS()
class UWEWATER_API UUWEBiomeTrackerSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    AUWESkyActor* SkyActor;
    
    UPROPERTY(Instanced, Transient)
    TArray<UUWEBiomeVolumeComponent*> Volumes;
    
    UPROPERTY(Transient)
    UMaterialParameterCollection* BiomeMaterialParameterCollection;
    
    UPROPERTY(Transient)
    UNiagaraParameterCollection* BiomeNiagaraParameterCollection;
    
public:
    UUWEBiomeTrackerSubsystem();

    virtual TStatId GetStatId() const override { RETURN_QUICK_DECLARE_CYCLE_STAT(UUWEBiomeTrackerSubsystem, STATGROUP_Tickables); }
};

