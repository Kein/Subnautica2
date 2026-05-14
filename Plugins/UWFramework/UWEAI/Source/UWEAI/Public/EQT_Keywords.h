#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "GameplayTagContainer.h"
#include "EQT_Keywords.generated.h"

UCLASS()
class UWEAI_API UEQT_Keywords : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagQuery TagQueryToMatch;
    
    UEQT_Keywords();

};

