#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "GameplayTagContainer.h"
#include "UWEEQT_InsideHabitationArea.generated.h"

UCLASS()
class UWEAI_API UUWEEQT_InsideHabitationArea : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool CheckCurrentHabitationArea;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag HabitationAreaTag;
    
    UUWEEQT_InsideHabitationArea();

};

