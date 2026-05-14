#include "UWEWeatherSyncComponent.h"
#include "Net/UnrealNetwork.h"

UUWEWeatherSyncComponent::UUWEWeatherSyncComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bOnScreenDebug = false;
    this->WeatherForecast = NULL;
    this->CloudLayersMaterialBrush = NULL;
    this->BlendMaterialBrush = NULL;
    this->BlendRenderTarget = NULL;
    this->CloudsRenderTarget = NULL;
    this->CloudLayersDynamicMaterialInstance = NULL;
    this->BlendDynamicMaterialInstance = NULL;
    this->CurrentForecastTime = 0.00f;
    this->CurrentWeatherStartTime = 0.00f;
    this->TimeToNextWeather = 0.00f;
    this->TimeToStartTransition = 0.00f;
    this->TransitionAlphaOverride = 0.00f;
    this->CurrentWeatherOverride = NULL;
    this->NextWeatherOverride = NULL;
    this->CurrentWeather = NULL;
    this->NextWeather = NULL;
    this->NextForecastIndex = 0;
    this->TransitionAlpha = 0.00f;
    this->PreviousTransitionAlpha = -1.00f;
    this->SaveHandle = NULL;
}

void UUWEWeatherSyncComponent::SetNextWeather(UUWEWeatherTypeBase* Weather) {
}

void UUWEWeatherSyncComponent::SetIsWeatherEnabled(bool bEnabled) {
}

void UUWEWeatherSyncComponent::SetCurrentWeather(UUWEWeatherTypeBase* Weather) {
}

void UUWEWeatherSyncComponent::JumpToWeatherTransition() {
}

void UUWEWeatherSyncComponent::JumpToNextWeather() {
}

void UUWEWeatherSyncComponent::InitializeWeather() {
}

float UUWEWeatherSyncComponent::GetTransitionAlpha() const {
    return 0.0f;
}

UUWEWeatherTypeBase* UUWEWeatherSyncComponent::GetRandomWeather() const {
    return NULL;
}

UUWEWeatherTypeBase* UUWEWeatherSyncComponent::GetNextWeather() const {
    return NULL;
}

bool UUWEWeatherSyncComponent::GetIsWeatherEnabled() const {
    return false;
}

UUWEWeatherTypeBase* UUWEWeatherSyncComponent::GetCurrentWeather() const {
    return NULL;
}

void UUWEWeatherSyncComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UUWEWeatherSyncComponent, CurrentForecastTime);
    DOREPLIFETIME(UUWEWeatherSyncComponent, CurrentWeatherStartTime);
    DOREPLIFETIME(UUWEWeatherSyncComponent, CurrentWeather);
    DOREPLIFETIME(UUWEWeatherSyncComponent, NextWeather);
    DOREPLIFETIME(UUWEWeatherSyncComponent, NextForecastIndex);
}


