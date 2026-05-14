#pragma once
#include "CoreMinimal.h"
#include "UWESurvivalSettings.generated.h"

USTRUCT(BlueprintType)
struct FUWESurvivalSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bInvulnerable;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bBlockOxygenConsumption;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bBlockFoodConsumption;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bBlockWaterConsumption;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bImmuneToStimuliReactions;
    
    UWEGAMECONFIGURATION_API FUWESurvivalSettings();
};

