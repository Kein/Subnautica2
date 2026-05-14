#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UWEAIReplicationComponent.generated.h"

class AActor;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEAI_API UUWEAIReplicationComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Replicated)
    AActor* TargetActor;
    
public:
    UUWEAIReplicationComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintPure)
    AActor* GetTargetActor();
    
};

