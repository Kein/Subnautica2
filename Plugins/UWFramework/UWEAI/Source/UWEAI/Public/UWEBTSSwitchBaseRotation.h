#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "GameplayTagContainer.h"
#include "UWEBTSSwitchBaseRotation.generated.h"

UCLASS(BlueprintType)
class UWEAI_API UUWEBTSSwitchBaseRotation : public UBTService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag StateTag;
    
public:
    UUWEBTSSwitchBaseRotation();

};

