#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UWEGreedyMeshPartition.h"
#include "UWEGreedyMeshingComponent.generated.h"

class UStaticMeshComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWESCULPTURALBASE_API UUWEGreedyMeshingComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    TArray<UStaticMeshComponent*> SMsToDestroy;
    
    UPROPERTY()
    TArray<FUWEGreedyMeshPartition> Partitions;
    
public:
    UUWEGreedyMeshingComponent(const FObjectInitializer& ObjectInitializer);

};

