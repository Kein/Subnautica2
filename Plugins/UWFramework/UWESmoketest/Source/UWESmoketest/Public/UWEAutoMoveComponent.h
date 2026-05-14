#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UWEAutoMoveComponent.generated.h"

class USplineComponent;

UCLASS(ClassGroup=Custom, Config=Engine, meta=(BlueprintSpawnableComponent))
class UWESMOKETEST_API UUWEAutoMoveComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    USplineComponent* SplineToFollow;
    
    UPROPERTY(Config)
    double UWEAutoMoveGoalDistanceThreshold;
    
    UPROPERTY(Config)
    double UWEAutoMoveDistanceThreshold;
    
    UPROPERTY(Config)
    double UWEAutoMoveDistanceBetweenPoints;
    
public:
    UUWEAutoMoveComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(Client, Reliable)
    void Stop();
    
    UFUNCTION(Client, Reliable)
    void Start(const FString& Arguments);
    
};

