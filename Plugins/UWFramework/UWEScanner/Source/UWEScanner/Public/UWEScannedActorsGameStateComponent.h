#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UWESaveObject.h"
#include "UWEScannableActorDataCollection.h"
#include "UWEScannedActorsGameStateComponent.generated.h"

class AActor;
class APlayerState;
class UUWESaveHandle;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWESCANNER_API UUWEScannedActorsGameStateComponent : public UActorComponent, public IUWESaveObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnRegisteredScannableActorsMappingChanged);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnActorInstanceScanned, APlayerState*, PlayerState, AActor*, Actor);
    
    UPROPERTY(BlueprintAssignable)
    FOnRegisteredScannableActorsMappingChanged OnRegisteredScannableActorsMappingChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnActorInstanceScanned OnActorInstanceScanned;
    
private:
    UPROPERTY(SaveGame, ReplicatedUsing=OnRep_RegisteredScannableActorsMapping)
    TArray<FUWEScannableActorDataCollection> RegisteredScannableActorsMapping;
    
    UPROPERTY()
    UUWESaveHandle* SaveHandle;
    
public:
    UUWEScannedActorsGameStateComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void OnRep_RegisteredScannableActorsMapping();
    
public:
    UFUNCTION(BlueprintCallable)
    void ClearScannedActors();
    
    UFUNCTION(NetMulticast, Reliable)
    void BroadcastActorInstanceScanned(APlayerState* PlayerState, AActor* Actor);
    

    // Fix for true pure virtual functions not being implemented
};

