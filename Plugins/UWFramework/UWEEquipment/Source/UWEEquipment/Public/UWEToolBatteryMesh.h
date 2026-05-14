#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Components/StaticMeshComponent.h"
#include "EUWEToolBatteryVisibility.h"
#include "UWEToolBatteryMesh.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEEQUIPMENT_API UUWEToolBatteryMesh : public UStaticMeshComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    bool bHasPowerInventoryComponent;
    
    UPROPERTY(EditDefaultsOnly)
    EUWEToolBatteryVisibility VisibilitySetting;
    
    UPROPERTY(EditDefaultsOnly)
    FComponentReference PowerInventoryComponent;
    
    UPROPERTY(EditDefaultsOnly)
    int32 PowerInventorySlot;
    
public:
    UUWEToolBatteryMesh(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void UpdateVisibility();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnMeshChanged();
    
private:
    UFUNCTION()
    void OnEnergyChangedCallback(float PercentEnergy);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnEnergyChanged(float PercentEnergy);
    
    UFUNCTION(BlueprintPure)
    float GetEnergyPercent() const;
    
};

