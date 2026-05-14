#include "UWESkyActor.h"
#include "Components/PostProcessComponent.h"
#include "Components/SceneComponent.h"
#include "UWEWeatherSyncComponent.h"
#include "Net/UnrealNetwork.h"
#include "UWEDaySequenceModifierComponent.h"
#include "UWEDaySequencePlayer.h"

AUWESkyActor::AUWESkyActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UUWEDaySequencePlayer>(TEXT("UWEAnimationPlayer"))) {
    this->NetDormancy = DORM_Never;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->TimeOfDay = 0.50f;
    this->NormalizedDaylight = 0.00f;
    this->PostProcessComponentSky = CreateDefaultSubobject<UPostProcessComponent>(TEXT("PostProcessComponent"));
    this->DaySequenceModifierComponent = CreateDefaultSubobject<UUWEDaySequenceModifierComponent>(TEXT("TransitionDaySequenceModifierComponent"));
    this->WeatherSyncComponent = CreateDefaultSubobject<UUWEWeatherSyncComponent>(TEXT("WeatherSyncComponent"));
    this->SunLightComponent = NULL;
    this->MoonLightComponent = NULL;
    this->SunLightMaterialLightFunction = NULL;
    this->MoonLightMaterialLightFunction = NULL;
    this->TransitionAlpha = 0.00f;
    this->DaySequenceModifierComponent->SetupAttachment(RootComponent);
    this->PostProcessComponentSky->SetupAttachment(RootComponent);
}

void AUWESkyActor::UWESetTimeOfDayPreview(float InTimeOfDayNormalized) {
}

float AUWESkyActor::UWEGetTimeOfDayPreview() const {
    return 0.0f;
}

void AUWESkyActor::TransitionTo(UDaySequenceCollectionAsset* NextSkySequence, float TransitionTime, UObject* InCaller) {
}

void AUWESkyActor::PushSkyOverride(AActor* InOwner, const FSkyOverride& InSkyOverride) {
}

void AUWESkyActor::PopSkyOverride(AActor* InOwner) {
}

void AUWESkyActor::OnTimeOfDayManuallyUpdated(UUWETimeOfDayComponent* InTimeOfDayComponent) {
}

void AUWESkyActor::OnRep_ReplicatedSkyPayload() {
}

void AUWESkyActor::GetDaySequenceCollections(TArray<UDaySequenceCollectionAsset*>& OutDaySequenceCollections) {
}

UDirectionalLightComponent* AUWESkyActor::GetActiveDirectionalLightComponent() {
    return NULL;
}

void AUWESkyActor::EditorTick_Implementation(float InDeltaTime) {
}

void AUWESkyActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AUWESkyActor, ReplicatedSkyPayload);
}


