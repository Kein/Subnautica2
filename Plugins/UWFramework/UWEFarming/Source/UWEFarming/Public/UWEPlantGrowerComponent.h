#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UWESaveObject.h"
#include "EUWEGrowthFunction.h"
#include "UWEPlantGrowerComponent.generated.h"

class AActor;
class UUWESaveHandle;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEFARMING_API UUWEPlantGrowerComponent : public UActorComponent, public IUWESaveObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUWEPlantFullyGrownDelegate);
    
    UPROPERTY(BlueprintAssignable)
    FUWEPlantFullyGrownDelegate OnPlantFullyGrown;
    
protected:
    UPROPERTY(EditAnywhere)
    float InitialGrowthPercentage;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bScaleWithGrowth;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, SaveGame, VisibleAnywhere, ReplicatedUsing=OnRep_Growth)
    float Growth;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_MaxGrowth)
    float MaxGrowth;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Replicated, SaveGame, VisibleAnywhere)
    float GrowthRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EUWEGrowthFunction GrowthFunction;
    
private:
    UPROPERTY()
    UUWESaveHandle* SaveHandle;
    
public:
    UUWEPlantGrowerComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetGrowthPercentage(float Percentage);
    
private:
    UFUNCTION()
    void OnRep_MaxGrowth(float OldMaxGrowth);
    
    UFUNCTION()
    void OnRep_Growth(float OldGrowth);
    
    UFUNCTION()
    void OnDied(AActor* SourceActor, AActor* TargetActor);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsFullyGrown() const;
    
    UFUNCTION(BlueprintPure)
    float GetGrowthPercentage() const;
    

    // Fix for true pure virtual functions not being implemented
};

