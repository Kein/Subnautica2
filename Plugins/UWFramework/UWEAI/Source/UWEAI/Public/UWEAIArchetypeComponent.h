#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "UWEAIDecisionTargetInfo.h"
#include "UWEAIProfileDataRow.h"
#include "UWEAISoundData.h"
#include "UWEAttackData.h"
#include "UWEAIArchetypeComponent.generated.h"

class UAnimMontage;
class UBehaviorTree;
class UDataTable;
class UFMODEvent;
class UUWEAIArchetypeDataAsset;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEAI_API UUWEAIArchetypeComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UBehaviorTree* BehaviorTreeOverride;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FUWEAIDecisionTargetInfo DecisionTargetInfoOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bForceDisableLODs;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UUWEAIArchetypeDataAsset* ArchetypeData;
    
    UPROPERTY(Transient)
    UUWEAIArchetypeDataAsset* LoadedArchetypeData;
    
    UPROPERTY(Transient)
    UDataTable* ProfilesDataTable;
    
    UPROPERTY(Transient)
    FName CurrentProfileName;
    
    UPROPERTY(Transient)
    FUWEAIProfileDataRow ActiveProfile;
    
public:
    UUWEAIArchetypeComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SwitchProfile(FName ProfileName);
    
    UFUNCTION(BlueprintCallable)
    void LoadArchetypeData(const UUWEAIArchetypeDataAsset* NewArchetypeData);
    
    UFUNCTION(BlueprintPure)
    float GetSightRadiusMultiplier() const;
    
    UFUNCTION(BlueprintPure)
    float GetSightRadius();
    
    UFUNCTION(BlueprintPure)
    float GetPeripheralVisionAngleDegreesMultiplier() const;
    
    UFUNCTION(BlueprintPure)
    float GetPeripheralVisionAngleDegrees();
    
    UFUNCTION(BlueprintPure)
    float GetLoseSightRadiusMultiplier() const;
    
    UFUNCTION(BlueprintPure)
    float GetLoseSightRadius();
    
    UFUNCTION(BlueprintPure)
    UUWEAIArchetypeDataAsset* GetLoadedArchetypeData() const;
    
    UFUNCTION(BlueprintPure)
    float GetHabitatRadiusMultiplier() const;
    
    UFUNCTION(BlueprintPure)
    UFMODEvent* GetFMODEvent(FGameplayTag InGameplayTag);
    
    UFUNCTION(BlueprintPure)
    UUWEAIArchetypeDataAsset* GetDefaultArchetypeData() const;
    
    UFUNCTION(BlueprintPure)
    float GetDecelerationAwarenessPerSecond() const;
    
    UFUNCTION(BlueprintPure)
    float GetDamageMultiplier() const;
    
    UFUNCTION(BlueprintPure)
    FUWEAIProfileDataRow GetCurrentProfile() const;
    
    UFUNCTION(BlueprintPure)
    FUWEAttackData GetAttackData(FGameplayTag AttackTag);
    
    UFUNCTION(BlueprintPure)
    TSoftObjectPtr<UAnimMontage> GetAnimMontage(FGameplayTag InGameplayTag);
    
    UFUNCTION(BlueprintPure)
    FUWEAISoundData GetAISoundData(FGameplayTag InGameplayTag);
    
    UFUNCTION(BlueprintPure)
    float GetAccelerationAwarenessPerSecond() const;
    
};

