#pragma once
#include "CoreMinimal.h"
#include "GameSettingValue.h"
#include "GameSettingValueDiscrete.generated.h"

UCLASS(Abstract)
class GAMESETTINGS_API UGameSettingValueDiscrete : public UGameSettingValue {
    GENERATED_BODY()
public:
    UGameSettingValueDiscrete();

    UFUNCTION(BlueprintPure)
    TArray<FText> GetDiscreteOptions() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetDiscreteOptionIndex() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetDiscreteOptionDefaultIndex() const;
    
};

