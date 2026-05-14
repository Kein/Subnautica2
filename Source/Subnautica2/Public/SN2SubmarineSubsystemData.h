#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UWEPrimaryDataAssetBase.h"
#include "SN2SubmarineSubsystemData.generated.h"

UCLASS()
class SUBNAUTICA2_API USN2SubmarineSubsystemData : public UUWEPrimaryDataAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MaxDamage;
    
    USN2SubmarineSubsystemData();

    UFUNCTION(BlueprintPure)
    static float GetSubsystemMaxDamage(FGameplayTag SubsystemTag);
    
};

