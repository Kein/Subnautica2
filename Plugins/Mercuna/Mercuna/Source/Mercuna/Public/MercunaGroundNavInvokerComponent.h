#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MercunaSupportedAgentTypes.h"
#include "MercunaGroundNavInvokerComponent.generated.h"

class AMercunaNavGroundGrid;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MERCUNA_API UMercunaGroundNavInvokerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bAutomatic;
    
    UPROPERTY(EditAnywhere)
    AMercunaNavGroundGrid* NavGrid;
    
    UPROPERTY(EditAnywhere)
    FMercunaSupportedAgentTypes AgentTypes;
    
    UPROPERTY(EditAnywhere)
    float GenerationRadius;
    
    UPROPERTY(EditAnywhere)
    float RemovalRadius;
    
    UMercunaGroundNavInvokerComponent(const FObjectInitializer& ObjectInitializer);

};

