#pragma once
#include "CoreMinimal.h"
#include "GameplayTask.h"
#include "EUWEClimbDirection.h"
#include "UWELadderClimbData.h"
#include "UUWEGameplayTask_ClimbLadder.generated.h"

class AActor;
class UUUWEGameplayTask_ClimbLadder;
class UUWELadderComponent;

UCLASS()
class UWELADDER_API UUUWEGameplayTask_ClimbLadder : public UGameplayTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FClimbCompletedDelegate, AActor*, Actor, EUWEClimbDirection, Direction);
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    FUWELadderClimbData Data;
    
    UPROPERTY(BlueprintAssignable)
    FClimbCompletedDelegate OnClimbCompleted;
    
    UUUWEGameplayTask_ClimbLadder(const FObjectInitializer&);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintPure)
    static UUUWEGameplayTask_ClimbLadder* GetTickingClimbingTask(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static UUUWEGameplayTask_ClimbLadder* ClimbLadder(AActor* ClimbingActor, UUWELadderComponent* Ladder, float Speed);
    
};

