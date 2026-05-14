#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "GameplayTagContainer.h"
#include "WEEQT_GameplayTags.generated.h"

UCLASS()
class UWEAI_API UWEEQT_GameplayTags : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer TagToMatch;
    
    UWEEQT_GameplayTags();

};

