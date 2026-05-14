#pragma once
#include "CoreMinimal.h"
#include "OnOxygenDelegateDelegate.h"
#include "UWEAttributeSetComponent.h"
#include "UWESurvivalSetComponent.generated.h"

UCLASS(BlueprintType, DefaultConfig, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class UWEABILITYSYSTEM_API UUWESurvivalSetComponent : public UUWEAttributeSetComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWaterChangedDelegate, float, Water);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnOxygenChanged, float, Oxygen);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFoodChangedDelegate, float, Food);
    
    UPROPERTY(BlueprintAssignable)
    FFoodChangedDelegate OnFoodChanged;
    
    UPROPERTY(BlueprintAssignable)
    FWaterChangedDelegate OnWaterChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnOxygenDelegate OnOxygenDepleted;
    
    UPROPERTY(BlueprintAssignable)
    FOnOxygenChanged OnOxygenChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnOxygenDelegate OnOxygenRestored;
    
    UUWESurvivalSetComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    float GetWater() const;
    
    UFUNCTION(BlueprintPure)
    float GetOxygen() const;
    
    UFUNCTION(BlueprintPure)
    float GetNormalizedWater() const;
    
    UFUNCTION(BlueprintPure)
    float GetNormalizedOxygen() const;
    
    UFUNCTION(BlueprintPure)
    float GetNormalizedFood() const;
    
    UFUNCTION(BlueprintPure)
    float GetNominalDepthMeters() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxWater() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxOxygen() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxFood() const;
    
    UFUNCTION(BlueprintPure)
    float GetFood() const;
    
};

