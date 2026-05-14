#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTTask_MercunaSurface_MoveTo.generated.h"

UCLASS()
class MERCUNA_API UBTTask_MercunaSurface_MoveTo : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Speed;
    
    UPROPERTY(EditAnywhere)
    float EndDistance;
    
    UPROPERTY(EditAnywhere)
    uint8 bObserveBlackboardValue: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bAllowPartialPath: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bAvoidTargetActor: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bUseEndActorOrientation: 1;
    
    UBTTask_MercunaSurface_MoveTo();

};

