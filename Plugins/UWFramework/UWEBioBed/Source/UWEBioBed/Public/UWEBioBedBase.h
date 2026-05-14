#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UWEBioBedBase.generated.h"

class APawn;
class UArrowComponent;

UCLASS()
class UWEBIOBED_API AUWEBioBedBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly, Instanced)
    UArrowComponent* PlayerSpawnTransform;
    
    UPROPERTY(EditAnywhere)
    bool bIsFallback;
    
public:
    AUWEBioBedBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UnregisterWithBioBedManager();
    
    UFUNCTION(BlueprintCallable)
    void RegisterWithBioBedManager();
    
    UFUNCTION(BlueprintCallable)
    void RegisterBioBed();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayerUnassigned();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayerSpawned(APawn* Pawn);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayerAssigned();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnLocalPlayerUnassigned();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnLocalPlayerReady();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnLocalPlayerAssigned();
    
};

