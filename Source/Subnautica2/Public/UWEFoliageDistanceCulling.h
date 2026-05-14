#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "UWEFoliageDistanceCulling.generated.h"

class UFoliageInstancedStaticMeshComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API UUWEFoliageDistanceCulling : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<UFoliageInstancedStaticMeshComponent*, FInt32Interval> InstanceComponents;
    
    UUWEFoliageDistanceCulling(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void InitializeComponents(const TArray<UFoliageInstancedStaticMeshComponent*>& Instances, const TArray<FInt32Interval>& CullingDistances);
    
};

