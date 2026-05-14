#pragma once
#include "CoreMinimal.h"
#include "UWENetModeTrackingWorldSubsystem.h"
#include "LightDataInstance.h"
#include "LightDebugRowData.h"
#include "UWELightingManagerSubsystem.generated.h"

class ULightComponentBase;
class UObject;
class UUWELightingManagerSubsystem;

UCLASS(BlueprintType)
class UWELIGHTING_API UUWELightingManagerSubsystem : public UUWENetModeTrackingWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    float TimeSinceLastUpdate;
    
    UPROPERTY()
    TMap<TWeakObjectPtr<ULightComponentBase>, FLightDataInstance> AllLights;
    
    UPROPERTY(Export)
    TSet<TWeakObjectPtr<ULightComponentBase>> ShadowCastingLights;
    
    UPROPERTY(Export)
    TArray<TWeakObjectPtr<ULightComponentBase>> NewlyRegisteredLights;
    
public:
    UUWELightingManagerSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetUpdateFrequency(float NewUpdateFrequency);
    
    UFUNCTION(BlueprintPure)
    static float GetUpdateFrequencyDelta();
    
    UFUNCTION()
    static int32 GetMaxNumShadowCastingLightsByScalability();
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UUWELightingManagerSubsystem* Get(const UObject* WorldContextObject);
    
    UFUNCTION()
    void CollectTopLights(TArray<FLightDebugRowData>& OutDebugRows) const;
    
};

