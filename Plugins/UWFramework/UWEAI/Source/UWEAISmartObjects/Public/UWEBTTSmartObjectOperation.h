#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "UWEBTTSmartObjectOperation.generated.h"

UCLASS(BlueprintType)
class UWEAISMARTOBJECTS_API UUWEBTTSmartObjectOperation : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 OperationType;
    
    UUWEBTTSmartObjectOperation();

};

