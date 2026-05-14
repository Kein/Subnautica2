#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/HitResult.h"
#include "GameplayTagContainer.h"
#include "UWEItemPickup.h"
#include "UWEInventoryRouterComponent.generated.h"

class AActor;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEINVENTORY_API UUWEInventoryRouterComponent : public UActorComponent, public IUWEItemPickup {
    GENERATED_BODY()
public:
    UUWEInventoryRouterComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void PredictPickupActor(AActor* Pickupable);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void PickupActor(AActor* Pickupable, const FHitResult& HitResult);
    
    UFUNCTION(BlueprintPure)
    bool CanPickUpActor(AActor* Pickupable, const FHitResult& HitResult, FGameplayTag& Reason);
    

    // Fix for true pure virtual functions not being implemented
};

