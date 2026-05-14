#pragma once
#include "CoreMinimal.h"
#include "UWEBioBedBase.h"
#include "SN2BioBed.generated.h"

class UUWEStoryGoal;
class UUWEStoryGoalRule;

UCLASS()
class SUBNAUTICA2_API ASN2BioBed : public AUWEBioBedBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<TSoftObjectPtr<UUWEStoryGoal>> PlayerStoryGoals;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWEStoryGoalRule* RequiredLogic;
    
public:
    ASN2BioBed(const FObjectInitializer& ObjectInitializer);

};

