#pragma once
#include "CoreMinimal.h"
#include "UWESerializedLevelSequenceActor.h"
#include "UWEAIAnimationSequenceActor.generated.h"

class UUWESweepTestEnforceComponent;

UCLASS()
class UWEAI_API AUWEAIAnimationSequenceActor : public AUWESerializedLevelSequenceActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UUWESweepTestEnforceComponent* SweepTestEnforceComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName ActorBindingTag;
    
public:
    AUWEAIAnimationSequenceActor(const FObjectInitializer& ObjectInitializer);

};

