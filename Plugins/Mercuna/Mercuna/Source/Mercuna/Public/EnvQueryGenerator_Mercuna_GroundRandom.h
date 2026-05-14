#pragma once
#include "CoreMinimal.h"
#include "EMercunaNavLinkQueryMode.h"
#include "EnvQueryGenerator_Mercuna_2DRandom.h"
#include "EnvQueryGenerator_Mercuna_GroundRandom.generated.h"

UCLASS(EditInlineNew)
class MERCUNA_API UEnvQueryGenerator_Mercuna_GroundRandom : public UEnvQueryGenerator_Mercuna_2DRandom {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    EMercunaNavLinkQueryMode FollowNavLinks;
    
    UEnvQueryGenerator_Mercuna_GroundRandom();

};

