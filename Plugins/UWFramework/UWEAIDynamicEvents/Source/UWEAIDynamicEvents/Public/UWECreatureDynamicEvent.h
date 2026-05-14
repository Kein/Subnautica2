#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "UWEAIScaleDeviationType.h"
#include "UWEBaseDynamicEvent.h"
#include "UWECreatureDynamicEvent.generated.h"

class AActor;
class UEnvQuery;
class UEnvQueryInstanceBlueprintWrapper;

UCLASS(BlueprintType, CollapseCategories, EditInlineNew)
class UWEAIDYNAMICEVENTS_API UUWECreatureDynamicEvent : public UUWEBaseDynamicEvent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly, SaveGame)
    TSoftClassPtr<AActor> ActorClass;
    
    UPROPERTY(EditDefaultsOnly, SaveGame)
    bool bGroup;
    
    UPROPERTY(EditDefaultsOnly, SaveGame)
    int32 GroupMinSize;
    
    UPROPERTY(EditDefaultsOnly, SaveGame)
    int32 GroupMaxSize;
    
    UPROPERTY(EditDefaultsOnly, SaveGame)
    TArray<TSoftClassPtr<AActor>> GroupTypes;
    
    UPROPERTY(EditDefaultsOnly, SaveGame)
    int32 GroupScaleDeviationPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IgnoreCollisionBetweenMembers;
    
    UPROPERTY(EditDefaultsOnly, SaveGame)
    UWEAIScaleDeviationType GroupScaleDeviationType;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* SpawnEnvQuery;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EEnvQueryRunMode::Type> EnvQueryRunMode;
    
    UPROPERTY(EditDefaultsOnly)
    FTransform SpawnTransform;
    
    UPROPERTY(EditDefaultsOnly, SaveGame)
    FGameplayTag GameplayCueTag;
    
private:
    UPROPERTY(SaveGame)
    FTransform ActorTransform;
    
    UPROPERTY()
    TWeakObjectPtr<AActor> ActorInstance;
    
public:
    UUWECreatureDynamicEvent();

private:
    UFUNCTION()
    void OnEQSQueryFinished(UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus::Type> QueryStatus);
    
    UFUNCTION()
    void OnActorEventEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
};

