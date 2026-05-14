#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "GameplayTagContainer.h"
#include "WEEQT_VolumeTags.generated.h"

UCLASS()
class UWEAI_API UWEEQT_VolumeTags : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagQuery TagQuery;
    
    UWEEQT_VolumeTags();

};

