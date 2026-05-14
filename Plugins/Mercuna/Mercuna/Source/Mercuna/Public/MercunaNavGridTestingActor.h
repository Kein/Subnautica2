#pragma once
#include "CoreMinimal.h"
#include "StructUtils/InstancedStruct.h"
#include "MercunaAgentType.h"
#include "MercunaNavTestingActor.h"
#include "MercunaNavTestingActor.h"
#include "MercunaNavGridTestingActor.generated.h"

class AMercunaNavGraph2D;
class AMercunaNavGridTestingActor;

UCLASS()
class MERCUNA_API AMercunaNavGridTestingActor : public AMercunaNavTestingActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FMercunaAgentType AgentType;
    
    UPROPERTY(EditAnywhere, NonTransactional)
    AMercunaNavGridTestingActor* OtherActor;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<AMercunaNavGraph2D> NavGrid;
    
    UPROPERTY(EditAnywhere)
    FInstancedStruct NavFilter;
    
    UPROPERTY(EditAnywhere)
    float MinTurnRadius;
    
    UPROPERTY(EditAnywhere)
    float IdealTurnRadius;
    
    UPROPERTY(EditAnywhere)
    float MaxSpeed;
    
    UPROPERTY(EditAnywhere)
    float InitialSpeed;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float SlopePenalty;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bUseEndDirection;
    
    UPROPERTY(BlueprintAssignable, NonPIEDuplicateTransient)
    AMercunaNavTestingActor::FMercunaPathUpdated OnPathUpdated;
    
    AMercunaNavGridTestingActor(const FObjectInitializer& ObjectInitializer);

};

