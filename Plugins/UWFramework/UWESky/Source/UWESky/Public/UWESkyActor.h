#pragma once
#include "CoreMinimal.h"
#include "DaySequenceActor.h"
#include "SkyOverride.h"
#include "SkyPayload.h"
#include "UWESkyActor.generated.h"

class AActor;
class UDaySequenceCollectionAsset;
class UDirectionalLightComponent;
class UMaterialInstanceDynamic;
class UObject;
class UPostProcessComponent;
class UUWECelestialBodyComponent;
class UUWEDaySequenceModifierComponent;
class UUWETimeOfDayComponent;
class UUWEWeatherSyncComponent;

UCLASS(Abstract, HideDropdown)
class UWESKY_API AUWESkyActor : public ADaySequenceActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    float TimeOfDay;
    
    UPROPERTY(BlueprintReadOnly)
    float NormalizedDaylight;
    
    UPROPERTY(BlueprintReadOnly, Export)
    TWeakObjectPtr<UUWECelestialBodyComponent> PrimaryCelestialBody;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UPostProcessComponent* PostProcessComponentSky;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UUWEDaySequenceModifierComponent* DaySequenceModifierComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UUWEWeatherSyncComponent* WeatherSyncComponent;
    
private:
    UPROPERTY()
    TArray<UDaySequenceCollectionAsset*> AllDaySequenceCollectionAssets;
    
    UPROPERTY(Transient)
    TArray<FSkyPayload> SkyPayloads;
    
    UPROPERTY(Transient)
    TMap<AActor*, FSkyOverride> SkyOverrides;
    
    UPROPERTY(Instanced, Transient)
    UDirectionalLightComponent* SunLightComponent;
    
    UPROPERTY(Instanced, Transient)
    UDirectionalLightComponent* MoonLightComponent;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ReplicatedSkyPayload)
    FSkyPayload ReplicatedSkyPayload;
    
    UPROPERTY(Transient)
    UMaterialInstanceDynamic* SunLightMaterialLightFunction;
    
    UPROPERTY(Transient)
    UMaterialInstanceDynamic* MoonLightMaterialLightFunction;
    
    UPROPERTY(Transient)
    float TransitionAlpha;
    
public:
    AUWESkyActor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UWESetTimeOfDayPreview(float InTimeOfDayNormalized);
    
    UFUNCTION(BlueprintPure)
    float UWEGetTimeOfDayPreview() const;
    
    UFUNCTION(BlueprintCallable)
    void TransitionTo(UDaySequenceCollectionAsset* NextSkySequence, float TransitionTime, UObject* InCaller);
    
    UFUNCTION(BlueprintCallable)
    void PushSkyOverride(AActor* InOwner, const FSkyOverride& InSkyOverride);
    
    UFUNCTION(BlueprintCallable)
    void PopSkyOverride(AActor* InOwner);
    
    UFUNCTION()
    void OnTimeOfDayManuallyUpdated(UUWETimeOfDayComponent* InTimeOfDayComponent);
    
private:
    UFUNCTION()
    void OnRep_ReplicatedSkyPayload();
    
public:
    UFUNCTION(BlueprintCallable)
    void GetDaySequenceCollections(TArray<UDaySequenceCollectionAsset*>& OutDaySequenceCollections);
    
    UFUNCTION(BlueprintCallable)
    UDirectionalLightComponent* GetActiveDirectionalLightComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EditorTick(float InDeltaTime);
    
};

