#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "UWEActorUID.h"
#include "UWEPlaceableProxySpawnedActor.h"
#include "UWEPlaceableProxy.generated.h"

class UUWESaveComponent;

UCLASS()
class UWEDYNAMICITEMS_API AUWEPlaceableProxy : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FGuid Guid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<AActor> ActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDisableProxyOnBeginPlay;
    
    UPROPERTY(Instanced)
    UUWESaveComponent* SaveComponent;
    
    UPROPERTY(SaveGame)
    bool bShouldSpawnActorOnBeginPlay;
    
public:
    AUWEPlaceableProxy(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnProxiedActorPickedUp(AActor* Actor);
    
    UFUNCTION()
    void OnProxiedActorEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
public:
    UFUNCTION(BlueprintPure)
    FUWEActorUID GetUWEActorUID() const;
    
    UFUNCTION(BlueprintPure)
    FUWEPlaceableProxySpawnedActor GetSpawnedActor() const;
    
};

