#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UWETransformedShapeActor.h"
#include "UWEHabitationVolume.generated.h"

UCLASS()
class UWEAI_API AUWEHabitationVolume : public AUWETransformedShapeActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag HabitationAreaTag;
    
public:
    AUWEHabitationVolume(const FObjectInitializer& ObjectInitializer);

};

