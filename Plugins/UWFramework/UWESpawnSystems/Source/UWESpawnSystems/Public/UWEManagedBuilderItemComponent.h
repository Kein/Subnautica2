#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UWEManagedBuilderItemComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWESPAWNSYSTEMS_API UUWEManagedBuilderItemComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UUWEManagedBuilderItemComponent(const FObjectInitializer& ObjectInitializer);

};

