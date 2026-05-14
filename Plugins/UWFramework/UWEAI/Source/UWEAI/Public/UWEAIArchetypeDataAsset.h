#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "UWEPrimaryDataAssetBase.h"
#include "Templates/SubclassOf.h"
#include "UWEAIArchetypeProfile.h"
#include "UWEAIAttackTicketData.h"
#include "UWEAIAwarenessParameters.h"
#include "UWEAIHealthFactorData.h"
#include "UWEAIHungerFactorData.h"
#include "UWEAILODParameters.h"
#include "UWEAIMovementData.h"
#include "UWEAISmartObjectEvaluationData.h"
#include "UWEAISoundData.h"
#include "UWEAIStaminaFactorData.h"
#include "UWEAITargetEvaluationData.h"
#include "UWEAITemperFactorData.h"
#include "UWEAttackData.h"
#include "UWEAIArchetypeDataAsset.generated.h"

class UAISense;
class UAISenseConfig;
class UAnimMontage;
class UBehaviorTree;
class UFMODEvent;

UCLASS(Const)
class UWEAI_API UUWEAIArchetypeDataAsset : public UUWEPrimaryDataAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag IdentifierTag;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTagContainer Keywords;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTagContainer Enemies;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTagContainer Friendlies;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FUWEAIAwarenessParameters Awareness;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<FGameplayTag, TSoftObjectPtr<UAnimMontage>> Animations;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<FGameplayTag, FUWEAttackData> Attacks;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<FGameplayTag, TSoftObjectPtr<UFMODEvent>> Sounds;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<FGameplayTag, FUWEAISoundData> SoundsMap;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<FGameplayTag, FUWEAIArchetypeProfile> ProfilesMap;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FUWEAIAttackTicketData AttackTicketData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UBehaviorTree> BehaviorTree;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool Brainless;
    
    UPROPERTY(EditAnywhere)
    FUWEAILODParameters LODParameters;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool DisableCollisionAtProximityToPlayerOnClient;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DisableCollisionDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool DisableMeshCollisionAtProximityToPlayerOnAuthority;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DisableMeshCollisionDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<FGameplayTag, FUWEAITargetEvaluationData> UtilityTargets;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FUWEAIHungerFactorData Hunger;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FUWEAIHealthFactorData Health;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FUWEAITemperFactorData Temper;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FUWEAIStaminaFactorData Stamina;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<FGameplayTag, FUWEAISmartObjectEvaluationData> UtilityActivities;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float QueryBoxHalfExtent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float FindSmartObjectsTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool FindPerceivedSmartObjectsOnly;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    TArray<UAISenseConfig*> SensesConfig;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UAISense> DominantSense;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool BroadcastPerceivedTargetToGroup;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool BroadcastPerceivedTargetToLeader;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FUWEAIMovementData MovementData;
    
    UUWEAIArchetypeDataAsset();

};

