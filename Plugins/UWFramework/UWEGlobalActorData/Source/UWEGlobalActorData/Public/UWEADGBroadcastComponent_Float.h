#pragma once
#include "CoreMinimal.h"
#include "UWEActorDataBroadcastComponent.h"
#include "UWEActorDataChange_Float.h"
#include "UWEADGBroadcastComponent_Float.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEGLOBALACTORDATA_API UUWEADGBroadcastComponent_Float : public UUWEActorDataBroadcastComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(SaveGame, ReplicatedUsing=OnRep_CurrentFloatChange)
    FUWEActorDataChange_Float CurrentFloatChange;
    
public:
    UUWEADGBroadcastComponent_Float(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void StartFloatChange(const FUWEActorDataChange_Float& DataChange);
    
private:
    UFUNCTION()
    void OnRep_CurrentFloatChange();
    
public:
    UFUNCTION(BlueprintPure)
    float GetValue() const;
    
};

