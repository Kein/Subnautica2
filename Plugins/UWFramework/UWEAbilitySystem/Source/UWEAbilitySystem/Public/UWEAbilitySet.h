#pragma once
#include "CoreMinimal.h"
#include "UWEPrimaryDataAssetBase.h"
#include "UWEAbilitySet.generated.h"

class UGameplayAbility;
class UGameplayEffect;
class UUWEGameplayTagResponseTable;

UCLASS()
class UWEABILITYSYSTEM_API UUWEAbilitySet : public UUWEPrimaryDataAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<TSoftClassPtr<UGameplayEffect>> GrantedEffects;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<TSoftClassPtr<UGameplayAbility>> GrantedAbilities;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UUWEGameplayTagResponseTable* TagResponseTable;
    
    UUWEAbilitySet();

};

