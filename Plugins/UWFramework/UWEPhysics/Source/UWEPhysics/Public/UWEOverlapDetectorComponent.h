#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/HitResult.h"
#include "UWEOverlapDetectorComponent.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Abstract, BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEPHYSICS_API UUWEOverlapDetectorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool DefaultEnabled;
    
protected:
    UPROPERTY(EditAnywhere)
    FName OverlapColliderTag;
    
    UPROPERTY(EditAnywhere)
    bool ProcessOverlapsOnTick;
    
public:
    UUWEOverlapDetectorComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void OnComponentEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable)
    void Enable(bool NewEnable);
    
};

