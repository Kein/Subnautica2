#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UWEAttackData.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct UWEAI_API FUWEAttackData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag DamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AttackRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAnimMontage> AttackMontage;
    
    FUWEAttackData();
};

