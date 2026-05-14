#pragma once
#include "CoreMinimal.h"
#include "UWEDialogueSpeakerComponent.h"
#include "UWEAlertSpeakerComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEDIALOGUE_API UUWEAlertSpeakerComponent : public UUWEDialogueSpeakerComponent {
    GENERATED_BODY()
public:
    UUWEAlertSpeakerComponent(const FObjectInitializer& ObjectInitializer);

};

