#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "SmartObjectRequestTypes.h"
#include "UWEAIAttributeValues.h"
#include "UWEAIBehaviorTreeParams.h"
#include "UWEAIDecisionTargetInfo.h"
#include "UWEAIIndexedUtilityValue.h"
#include "UWEAIPerceivedActorsData.h"
#include "UWEAttachmentData.h"
#include "UWESmartObjectData.h"
#include "UWEAIDecisionComponent.generated.h"

class AActor;
class AUWEAIController;
class UUWEAIArchetypeDataAsset;
class UUWEAIDecisionComponent;
class UUWEBehaviorSetComponent;
class UUWEHealthSetComponent;
class UUWEPhysicalSetComponent;
class UUWESurvivalSetComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEAI_API UUWEAIDecisionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient, VisibleAnywhere)
    FUWESmartObjectData SmartObjectData;
    
    UPROPERTY(BlueprintReadWrite, Transient, VisibleAnywhere)
    FUWEAttachmentData AttachmentData;
    
    UPROPERTY(Transient)
    TArray<FUWEAIBehaviorTreeParams> BehaviorTreeParams;
    
    UPROPERTY(Transient)
    FGameplayTagContainer RegisteredStimulusTags;
    
    UPROPERTY(Transient)
    TMap<FGameplayTag, AActor*> WorkerStimulusData;
    
    UPROPERTY(Transient)
    FGameplayTagContainer WorkerOwnedGameplayTags;
    
    UPROPERTY(Transient)
    FUWEAIAttributeValues WorkerAttributeValues;
    
    UPROPERTY(Transient)
    TMap<AActor*, FUWEAIPerceivedActorsData> WorkerPerceivedActorsData;
    
    UPROPERTY(Transient)
    TArray<FUWEAIIndexedUtilityValue> AllChildren;
    
    UPROPERTY(Transient)
    TArray<FUWEAIIndexedUtilityValue> SortedChildren;
    
    UPROPERTY(Transient)
    FUWEAIIndexedUtilityValue SelectedChild;
    
protected:
    UPROPERTY(Transient)
    AUWEAIController* AIOwner;
    
    UPROPERTY(Transient)
    UUWEAIArchetypeDataAsset* ArchetypeData;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UUWEHealthSetComponent* HealthSetComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UUWESurvivalSetComponent* SurvivalSetComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UUWEPhysicalSetComponent* PhysicalSetComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UUWEBehaviorSetComponent* BehaviorSetComponent;
    
    UPROPERTY(Transient)
    FUWEAIDecisionTargetInfo DecisionTargetInfo;
    
    UPROPERTY(Transient)
    int32 SelectedChildIdx;
    
    UPROPERTY(Transient)
    TArray<FUWEAIIndexedUtilityValue> CachedSortedChildren;
    
    UPROPERTY(Transient)
    TArray<FSmartObjectRequestResult> SmartObjects;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<AActor> CurrentAttackTarget;
    
    UPROPERTY(Transient)
    TArray<int32> ReservedAttackTickets;
    
public:
    UUWEAIDecisionComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetParentActor(AActor* Parent);
    
    UFUNCTION(BlueprintCallable)
    void SetDecisionTarget(const FUWEAIDecisionTargetInfo& InTarget);
    
    UFUNCTION(BlueprintPure)
    bool IsLeader() const;
    
    UFUNCTION(BlueprintPure)
    bool HasLeader() const;
    
    UFUNCTION(BlueprintPure)
    UUWEAIDecisionComponent* GetLeaderAIDecision() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetLeader() const;
    
    UFUNCTION(BlueprintPure)
    FUWEAIDecisionTargetInfo GetDecisionTargetInfo() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetDecisionTarget() const;
    
};

