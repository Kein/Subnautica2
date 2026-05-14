#pragma once
#include "CoreMinimal.h"
//#include "DaySequenceModifierComponent.h"
#include "Components/SceneComponent.h"
#include "UWEDaySequenceModifierComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UUWEDaySequenceModifierComponent :public USceneComponent {//FIXME: ENGINE CHANGE: public UDaySequenceModifierComponent {
    GENERATED_BODY()
public:
    UUWEDaySequenceModifierComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void ReInitializeDaySequenceCollection();
    
};

