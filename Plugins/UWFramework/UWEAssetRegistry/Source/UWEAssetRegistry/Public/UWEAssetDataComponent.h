#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UWEAssetDataComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEASSETREGISTRY_API UUWEAssetDataComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UUWEAssetDataComponent(const FObjectInitializer& ObjectInitializer);

};

