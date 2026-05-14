#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTTask_Mercuna3D_MoveTo.generated.h"

UCLASS()
class MERCUNA_API UBTTask_Mercuna3D_MoveTo : public UBTTask_BlackboardBase {
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
    
    UBTTask_Mercuna3D_MoveTo();

};

