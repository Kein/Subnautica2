#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UWEAlertStatusHandler.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEALERTS_API UUWEAlertStatusHandler : public UActorComponent {
    GENERATED_BODY()
public:
    UUWEAlertStatusHandler(const FObjectInitializer& ObjectInitializer);

};

