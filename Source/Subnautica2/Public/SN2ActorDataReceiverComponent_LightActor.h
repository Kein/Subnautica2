#pragma once
#include "CoreMinimal.h"
#include "UWEActorDataReceiverComponent.h"
#include "SN2ActorDataReceiverComponent_LightActor.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2ActorDataReceiverComponent_LightActor : public UUWEActorDataReceiverComponent {
    GENERATED_BODY()
public:
    USN2ActorDataReceiverComponent_LightActor(const FObjectInitializer& ObjectInitializer);

};

