#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UWECharacterTrackerEntityComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWECHARACTERTRACKER_API UUWECharacterTrackerEntityComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UUWECharacterTrackerEntityComponent(const FObjectInitializer& ObjectInitializer);

};

