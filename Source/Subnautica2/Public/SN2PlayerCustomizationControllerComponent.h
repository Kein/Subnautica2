#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UWEPlayerCustomizationSet.h"
#include "SN2PlayerCustomizationControllerComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USN2PlayerCustomizationControllerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    USN2PlayerCustomizationControllerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(Reliable, Server)
    void ServerApplyCustomization(const FUWEPlayerCustomizationSet& CustomizationSet);
    
};

