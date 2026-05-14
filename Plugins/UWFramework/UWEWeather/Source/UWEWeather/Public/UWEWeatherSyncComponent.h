#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UWESaveObject.h"
#include "MaterialParameterPair.h"
#include "WeatherEventDelegate.h"
#include "UWEWeatherSyncComponent.generated.h"

class UMaterialInstanceDynamic;
class UMaterialInterface;
class UTextureRenderTarget2D;
class UUWESaveHandle;
class UUWEWeatherForecast;
class UUWEWeatherTypeBase;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEWEATHER_API UUWEWeatherSyncComponent : public UActorComponent, public IUWESaveObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOnScreenDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UUWEWeatherForecast* WeatherForecast;
    
    UPROPERTY(EditDefaultsOnly)
    UMaterialInterface* CloudLayersMaterialBrush;
    
    UPROPERTY(EditDefaultsOnly)
    UMaterialInterface* BlendMaterialBrush;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UTextureRenderTarget2D* BlendRenderTarget;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UTextureRenderTarget2D* CloudsRenderTarget;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    UMaterialInstanceDynamic* CloudLayersDynamicMaterialInstance;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    UMaterialInstanceDynamic* BlendDynamicMaterialInstance;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    TArray<FMaterialParameterPair> PackedCloudMaterialParameters;
    
    UPROPERTY(BlueprintAssignable)
    FWeatherEvent OnWeatherChangedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FWeatherEvent OnWeatherEnabledChangedDelegate;
    
    UPROPERTY(BlueprintReadWrite, Replicated, VisibleAnywhere)
    float CurrentForecastTime;
    
    UPROPERTY(BlueprintReadOnly, Replicated, SaveGame, VisibleAnywhere)
    float CurrentWeatherStartTime;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float TimeToNextWeather;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float TimeToStartTransition;
    
protected:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float TransitionAlphaOverride;
    
    UPROPERTY(BlueprintReadWrite, Transient, VisibleAnywhere)
    UUWEWeatherTypeBase* CurrentWeatherOverride;
    
    UPROPERTY(BlueprintReadWrite, Transient, VisibleAnywhere)
    UUWEWeatherTypeBase* NextWeatherOverride;
    
    UPROPERTY(BlueprintReadOnly, Replicated, SaveGame, VisibleAnywhere)
    UUWEWeatherTypeBase* CurrentWeather;
    
    UPROPERTY(BlueprintReadWrite, Replicated, SaveGame, VisibleAnywhere)
    UUWEWeatherTypeBase* NextWeather;
    
    UPROPERTY(BlueprintReadWrite, Replicated, SaveGame, VisibleAnywhere)
    int32 NextForecastIndex;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float TransitionAlpha;
    
    UPROPERTY(Transient)
    float PreviousTransitionAlpha;
    
private:
    UPROPERTY()
    UUWESaveHandle* SaveHandle;
    
public:
    UUWEWeatherSyncComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetNextWeather(UUWEWeatherTypeBase* Weather);
    
    UFUNCTION(BlueprintCallable)
    void SetIsWeatherEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentWeather(UUWEWeatherTypeBase* Weather);
    
    UFUNCTION(BlueprintCallable)
    void JumpToWeatherTransition();
    
    UFUNCTION(BlueprintCallable)
    void JumpToNextWeather();
    
    UFUNCTION(BlueprintCallable)
    void InitializeWeather();
    
    UFUNCTION(BlueprintPure)
    float GetTransitionAlpha() const;
    
protected:
    UFUNCTION(BlueprintPure)
    UUWEWeatherTypeBase* GetRandomWeather() const;
    
public:
    UFUNCTION(BlueprintPure)
    UUWEWeatherTypeBase* GetNextWeather() const;
    
    UFUNCTION(BlueprintPure)
    bool GetIsWeatherEnabled() const;
    
    UFUNCTION(BlueprintPure)
    UUWEWeatherTypeBase* GetCurrentWeather() const;
    

    // Fix for true pure virtual functions not being implemented
};

