#pragma once
#include "CoreMinimal.h"
#include "Engine/HitResult.h"
#include "Components/SphereComponent.h"
#include "SN2PawnTriggerComponent.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2PawnTriggerComponent : public USphereComponent {
    GENERATED_BODY()
public:
    USN2PawnTriggerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

