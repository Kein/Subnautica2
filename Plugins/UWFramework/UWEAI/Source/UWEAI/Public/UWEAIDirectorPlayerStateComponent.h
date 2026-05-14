#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UWEAIDirectorPlayerStateComponent.generated.h"

class AActor;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEAI_API UUWEAIDirectorPlayerStateComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Replicated)
    bool IsPlayerDetected;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    float HighestAwareness;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    TWeakObjectPtr<AActor> HighestAwarenessActor;
    
    UUWEAIDirectorPlayerStateComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

