#pragma once
#include "CoreMinimal.h"
#include "UWEActorDataBroadcastComponent.h"
#include "UWEActorDataChange_Bool.h"
#include "UWEADGBroadcastComponent_Bool.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEGLOBALACTORDATA_API UUWEADGBroadcastComponent_Bool : public UUWEActorDataBroadcastComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(SaveGame, ReplicatedUsing=OnRep_CurrentBoolChange)
    FUWEActorDataChange_Bool CurrentBoolChange;
    
public:
    UUWEADGBroadcastComponent_Bool(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void StartBoolChange(const FUWEActorDataChange_Bool& DataChange);
    
private:
    UFUNCTION()
    void OnRep_CurrentBoolChange();
    
public:
    UFUNCTION(BlueprintPure)
    bool GetValue() const;
    
};

