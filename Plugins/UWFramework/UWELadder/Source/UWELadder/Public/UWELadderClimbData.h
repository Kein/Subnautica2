#pragma once
#include "CoreMinimal.h"
#include "EUWEClimbDirection.h"
#include "UWELadderClimbData.generated.h"

class AActor;
class UUWELadderComponent;

USTRUCT(BlueprintType)
struct FUWELadderClimbData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export)
    TWeakObjectPtr<UUWELadderComponent> LadderComponent;
    
    UPROPERTY(BlueprintReadOnly)
    TWeakObjectPtr<AActor> ClimbingActor;
    
    UPROPERTY(BlueprintReadOnly)
    EUWEClimbDirection Direction;
    
    UPROPERTY(BlueprintReadOnly)
    float Speed;
    
    UWELADDER_API FUWELadderClimbData();
};

