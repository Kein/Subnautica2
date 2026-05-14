#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UWEImGuiComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEIMGUI_API UUWEImGuiComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UUWEImGuiComponent(const FObjectInitializer& ObjectInitializer);

};

