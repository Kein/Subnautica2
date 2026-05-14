#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UWEGrowthData.h"
#include "UWESeedGrowerReplicatorComponent.generated.h"

class AActor;
class UUWESeedGrowerComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEFARMING_API UUWESeedGrowerReplicatorComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(ReplicatedUsing=OnRep_GrowthData)
    TArray<FUWEGrowthData> GrowthData;
    
    UPROPERTY(Instanced, Transient)
    TArray<UUWESeedGrowerComponent*> SeedGrowers;
    
public:
    UUWESeedGrowerReplicatorComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void OnRep_GrowthData(const TArray<FUWEGrowthData>& OldGrowthData);
    
public:
    UFUNCTION(NetMulticast, Reliable)
    void MulticastSeedPickedUp(AActor* Seed, uint32 SeedGrowerIndex);
    
    UFUNCTION(NetMulticast, Reliable)
    void MultiCastSeedDropped(AActor* Seed, uint32 SeedGrowerIndex);
    
};

