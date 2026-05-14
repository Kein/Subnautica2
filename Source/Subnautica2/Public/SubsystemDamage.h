#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SubsystemDamage.generated.h"

USTRUCT(BlueprintType)
struct FSubsystemDamage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FGameplayTag SubsystemTag;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float Damage;
    
    SUBNAUTICA2_API FSubsystemDamage();
};

