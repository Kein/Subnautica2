#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Curves/CurveFloat.h"
#include "UWEOverlapWorldForce.generated.h"

class UActorComponent;

UCLASS(Abstract)
class UWEWORLDFORCES_API AUWEOverlapWorldForce : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    TArray<UActorComponent*> OverlappedObjects;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool IsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableMassRemapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeFloatCurve MassRemapCurve;
    
public:
    AUWEOverlapWorldForce(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetActive(bool InIsActive);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnExit(AActor* Actor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnEnter(AActor* Actor);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnActiveStateChanged();
    
};

