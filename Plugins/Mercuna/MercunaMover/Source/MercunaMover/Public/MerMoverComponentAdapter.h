#pragma once
#include "CoreMinimal.h"
#include "MercunaMovementAdapter.h"
#include "MoverSimulationTypes.h"
#include "MoverSimulationTypes.h"
#include "MoverTypes.h"
#include "MerMoverComponentAdapterMovementModeProducerMap.h"
#include "MerMoverMovementModeProducerIndexMap.h"
#include "MerMoverComponentAdapter.generated.h"

class UMercunaMoverMovementModeProducer;
class UMercunaNavigationComponent;
class UMoverComponent;

UCLASS(BlueprintType, CollapseCategories, EditInlineNew)
class MERCUNAMOVER_API UMerMoverComponentAdapter : public UMercunaMovementAdapter, public IMoverInputProducerInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UMoverComponent* MoverComponent;
    
    UPROPERTY(Instanced)
    UMercunaNavigationComponent* NavigationComponent;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UMercunaMoverMovementModeProducer* CurrentMoverProducer;
    
    UPROPERTY(EditAnywhere, Instanced)
    TArray<UMercunaMoverMovementModeProducer*> Producers;
    
    UPROPERTY(EditAnywhere)
    FMerMoverMovementModeProducerIndexMap MovementModeProducerIndexMap;
    
    UPROPERTY()
    FMerMoverComponentAdapterMovementModeProducerMap MovementModeMapping;
    
public:
    UMerMoverComponentAdapter();

protected:
    UFUNCTION()
    void OnPreSimTick(const FMoverTimeStep& TimeStep, const FMoverInputCmdContext& InputCmd);
    
    UFUNCTION()
    void OnMovementModeChanged(const FName& PreviousMovementModeName, const FName& NewMovementModeName);
    

    // Fix for true pure virtual functions not being implemented
};

