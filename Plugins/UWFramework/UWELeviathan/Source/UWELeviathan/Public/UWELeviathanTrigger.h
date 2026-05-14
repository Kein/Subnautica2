#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/HitResult.h"
#include "UWELeviathanTrigger.generated.h"

class APawn;
class UPrimitiveComponent;
class USceneComponent;
class USphereComponent;

UCLASS()
class UWELEVIATHAN_API AUWELeviathanTrigger : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    USceneComponent* SpawnPoint;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    USphereComponent* Trigger;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<APawn> TriggeringClass;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<AActor> LeviathanClass;
    
public:
    AUWELeviathanTrigger(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayerEntered();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnLeviathanMoved(AActor* MovedLeviathan);
    
private:
    UFUNCTION()
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

