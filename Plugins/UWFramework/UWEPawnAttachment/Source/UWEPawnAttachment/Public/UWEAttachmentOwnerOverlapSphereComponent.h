#pragma once
#include "CoreMinimal.h"
#include "Engine/HitResult.h"
#include "Components/SphereComponent.h"
#include "UWEAttachmentOwnerOverlapSphereComponent.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEPAWNATTACHMENT_API UUWEAttachmentOwnerOverlapSphereComponent : public USphereComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName PawnAttachmentSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableClientLocalPrediction;
    
public:
    UUWEAttachmentOwnerOverlapSphereComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

