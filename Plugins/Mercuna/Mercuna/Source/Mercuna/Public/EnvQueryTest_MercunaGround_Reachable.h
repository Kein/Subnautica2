#pragma once
#include "CoreMinimal.h"
#include "EMercunaNavLinkQueryMode.h"
#include "EnvQueryTest_Mercuna2D_Reachable.h"
#include "EnvQueryTest_MercunaGround_Reachable.generated.h"

UCLASS()
class MERCUNA_API UEnvQueryTest_MercunaGround_Reachable : public UEnvQueryTest_Mercuna2D_Reachable {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    EMercunaNavLinkQueryMode FollowNavLinks;
    
    UEnvQueryTest_MercunaGround_Reachable();

};

