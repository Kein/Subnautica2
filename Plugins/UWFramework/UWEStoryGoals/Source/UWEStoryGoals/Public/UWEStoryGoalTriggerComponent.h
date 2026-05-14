#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "Engine/HitResult.h"
#include "UWEStoryGoalTriggerComponent.generated.h"

class AActor;
class UPrimitiveComponent;
class UUWEStoryGoal;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWESTORYGOALS_API UUWEStoryGoalTriggerComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UUWEStoryGoal*> StoryGoalsRefToUnlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UUWEStoryGoal*> StoryGoalsRefToUnlockOnEnd;
    
    UUWEStoryGoalTriggerComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

