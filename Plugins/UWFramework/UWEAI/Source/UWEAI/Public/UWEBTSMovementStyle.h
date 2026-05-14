#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "GameplayTagContainer.h"
#include "UWEBTSMovementStyle.generated.h"

UCLASS(BlueprintType)
class UWEAI_API UUWEBTSMovementStyle : public UBTService {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag MovementStyle;
    
    UUWEBTSMovementStyle();

};

