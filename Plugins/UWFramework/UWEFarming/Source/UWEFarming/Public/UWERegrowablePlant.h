#pragma once
#include "CoreMinimal.h"
#include "UWEGameplayActor.h"
#include "UWESaveCallbacks.h"
#include "UWEGrowthData.h"
#include "UWERegrowablePlant.generated.h"

class AActor;
class AStaticMeshActor;
class UStaticMeshComponent;
class UUWEAssetDataComponent;
class UUWEHealthSetComponent;
class UUWESaveComponent;

UCLASS(NotPlaceable)
class UWEFARMING_API AUWERegrowablePlant : public AUWEGameplayActor, public IUWESaveCallbacks {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UUWEHealthSetComponent* HealthSetComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UUWESaveComponent* SaveComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UStaticMeshComponent* StaticMeshComponent;
    
    UPROPERTY(SaveGame, ReplicatedUsing=OnRep_ReplacesActor)
    AStaticMeshActor* ReplacesActor;
    
    UPROPERTY(SaveGame)
    bool bReplacesActorSet;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UUWEAssetDataComponent* AssetDataComponent;
    
    UPROPERTY(AdvancedDisplay, SaveGame, VisibleAnywhere, ReplicatedUsing=OnRep_GrowthData)
    FUWEGrowthData GrowthData;
    
    UPROPERTY(SaveGame, VisibleAnywhere)
    float MaxGrowth;
    
public:
    AUWERegrowablePlant(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void TryFindReplacedActor();
    
    UFUNCTION()
    void OnRep_ReplacesActor();
    
    UFUNCTION()
    void OnRep_GrowthData();
    
    UFUNCTION()
    void OnFullyGrown();
    
    UFUNCTION()
    void OnDied(AActor* SourceActor, AActor* TargetActor);
    

    // Fix for true pure virtual functions not being implemented
};

