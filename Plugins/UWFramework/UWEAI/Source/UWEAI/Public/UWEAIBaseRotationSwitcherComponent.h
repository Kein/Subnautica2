#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "WEAIBaseRotationSwitcherStateConfig.h"
#include "UWEAIBaseRotationSwitcherComponent.generated.h"

class UUWEAIMovementComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEAI_API UUWEAIBaseRotationSwitcherComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FGameplayTag, FWEAIBaseRotationSwitcherStateConfig> States;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag DefaultStateTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool AddReplicatedLooseGameplayTagToAbilitySystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool PauseOnCollisionWithStaticObstacle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StaticObstacleCollisionPauseTime;
    
    UPROPERTY(Instanced)
    UUWEAIMovementComponent* MovementComponent;
    
public:
    UUWEAIBaseRotationSwitcherComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SwitchState(const FGameplayTag& StateTag);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultState();
    
    UFUNCTION(BlueprintPure)
    FGameplayTag GetCurrentStateTag() const;
    
};

