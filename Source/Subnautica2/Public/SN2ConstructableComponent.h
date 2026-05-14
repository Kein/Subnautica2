#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UWESaveObject.h"
#include "UWESculpturalBaseCellCost.h"
#include "SN2BuilderConstructionInfo.h"
#include "SN2BuilderConstructionInfoProvider.h"
#include "SN2ConstructableParams.h"
#include "SN2ConstructableComponent.generated.h"

class ASN2BuilderTool;
class AUWEBaseRefundActor;
class UUWESaveHandle;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2ConstructableComponent : public UActorComponent, public ISN2BuilderConstructionInfoProvider, public IUWESaveObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnConstructionProgressChanged, float, CurrentProgress);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnConstructionFinished, bool, WasConstructed);
    
    UPROPERTY(BlueprintAssignable)
    FOnConstructionFinished OnConstructionFinished;
    
    UPROPERTY(BlueprintAssignable)
    FOnConstructionProgressChanged OnProgressChanged;
    
protected:
    UPROPERTY(SaveGame, ReplicatedUsing=OnRep_Progress)
    float ConstructionProgress;
    
    UPROPERTY(BlueprintReadWrite, Replicated, SaveGame)
    TArray<FUWESculpturalBaseCellCost> PaidCost;
    
    UPROPERTY(BlueprintReadWrite, Replicated, SaveGame)
    TArray<FUWESculpturalBaseCellCost> UnpaidCost;
    
    UPROPERTY(BlueprintReadWrite, Replicated, SaveGame)
    FSN2ConstructableParams ConstructableParams;
    
    UPROPERTY()
    TWeakObjectPtr<AUWEBaseRefundActor> RefundOverflowActor;
    
private:
    UPROPERTY()
    UUWESaveHandle* SaveHandle;
    
public:
    USN2ConstructableComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetConstructionProgressToFull();
    
    UFUNCTION(BlueprintCallable)
    void SetConstructionProgressToEmpty();
    
protected:
    UFUNCTION(BlueprintCallable)
    bool SetConstructionProgress(float Progress);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetConstructableParams(const FSN2ConstructableParams& ConstructionParams);
    
protected:
    UFUNCTION()
    void OnRep_Progress();
    
public:
    UFUNCTION(BlueprintPure)
    float GetFinishingProgress() const;
    
    UFUNCTION(BlueprintPure)
    float GetConstructionProgress() const;
    
    UFUNCTION(BlueprintCallable)
    FSN2BuilderConstructionInfo GetConstructionInfo(ASN2BuilderTool* builder);
    

    // Fix for true pure virtual functions not being implemented
};

