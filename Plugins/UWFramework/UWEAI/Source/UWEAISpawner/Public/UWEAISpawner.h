#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UWEAISpawnedActor.h"
#include "UWEAISpawner.generated.h"

class UBoxComponent;
class UWorld;

UCLASS()
class UWEAISPAWNER_API AUWEAISpawner : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    int32 Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FUWEAISpawnedActor> Archetypes;
    
    UPROPERTY(EditAnywhere)
    uint8 bAutoSpawnOnBeginPlay: 1;
    
    UPROPERTY(EditAnywhere)
    float SpawningCountScale;
    
    UPROPERTY(EditInstanceOnly, Instanced)
    UBoxComponent* BoxComponent;
    
    UPROPERTY()
    TArray<AActor*> AllSpawnedEntities;
    
public:
    AUWEAISpawner(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void OnWorldBeingTearDown(UWorld* World);
    
public:
    UFUNCTION(BlueprintCallable)
    void DoStopLogic();
    
    UFUNCTION(BlueprintCallable)
    void DoStartLogic();
    
    UFUNCTION(BlueprintCallable)
    void DoSpawning();
    
    UFUNCTION(BlueprintCallable)
    void DoDespawning();
    
};

