#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EUWECueActionTarget.h"
#include "UWEPlayerTriggerAction.h"
#include "UWEExecuteCueAction.generated.h"

class AActor;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWETRIGGER_API UUWEExecuteCueAction : public UUWEPlayerTriggerAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FGameplayTag CueTag;
    
    UPROPERTY(EditAnywhere)
    EUWECueActionTarget TargetType;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<AActor> TargetActor;
    
public:
    UUWEExecuteCueAction(const FObjectInitializer& ObjectInitializer);

};

