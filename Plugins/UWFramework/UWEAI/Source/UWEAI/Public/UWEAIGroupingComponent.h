#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UWEAIGroupMember.h"
#include "UWEAIGroupingComponent.generated.h"

class AActor;
class AUWEAIController;
class AUWEAIPawn;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEAI_API UUWEAIGroupingComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    AUWEAIPawn* AIOwner;
    
    UPROPERTY()
    TArray<FUWEAIGroupMember> GroupEntities;
    
    UPROPERTY()
    TWeakObjectPtr<AActor> Leader;
    
public:
    UUWEAIGroupingComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TryRearrangeGroup();
    
    UFUNCTION(BlueprintCallable)
    void TryDestroyGroup();
    
    UFUNCTION(BlueprintCallable)
    void SetLeader(AActor* InLeader);
    
    UFUNCTION(BlueprintPure)
    bool IsLeader() const;
    
    UFUNCTION(BlueprintPure)
    AUWEAIController* GetLeaderAIController() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetLeader() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FUWEAIGroupMember> GetGroup();
    
};

