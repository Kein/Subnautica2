#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UWESimpleShape.h"
#include "UWESimpleShapeTriggerComponent.generated.h"

class AActor;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWERANGETRACKER_API UUWESimpleShapeTriggerComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FUWESimpleShape Shape;
    
private:
    UPROPERTY()
    TArray<TWeakObjectPtr<AActor>> ActorsInRange;
    
public:
    UUWESimpleShapeTriggerComponent(const FObjectInitializer& ObjectInitializer);

};

