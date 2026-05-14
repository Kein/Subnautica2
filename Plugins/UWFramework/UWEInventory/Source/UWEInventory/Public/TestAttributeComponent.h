#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UWEExtraAttributeCaptureInterface.h"
#include "TestAttributeComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEINVENTORY_API UTestAttributeComponent : public UActorComponent, public IUWEExtraAttributeCaptureInterface {
    GENERATED_BODY()
public:
    UPROPERTY()
    float FloatAttribute;
    
    UPROPERTY()
    float ComponentOnlyFloatAttribute;
    
    UTestAttributeComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

