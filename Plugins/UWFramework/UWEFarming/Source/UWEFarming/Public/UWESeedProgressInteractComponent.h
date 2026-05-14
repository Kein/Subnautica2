#pragma once
#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "Interactable.h"
#include "UWESeedProgressInteractComponent.generated.h"

class UUWESeedGrowerComponent;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEFARMING_API UUWESeedProgressInteractComponent : public USphereComponent, public IInteractable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UUWESeedGrowerComponent* SeedGrower;
    
    UPROPERTY()
    FText SeedProgressFormatText;
    
    UPROPERTY()
    FString SeedProgressPrimaryHintKey;
    
public:
    UUWESeedProgressInteractComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

