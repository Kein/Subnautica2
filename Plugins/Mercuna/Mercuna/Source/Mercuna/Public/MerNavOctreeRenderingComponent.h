#pragma once
#include "CoreMinimal.h"
#include "MerNavGraphRenderingComponent.h"
#include "MerNavOctreeRenderingComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMerNavOctreeRenderingComponent : public UMerNavGraphRenderingComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    int32 DrawDistance;
    
public:
    UMerNavOctreeRenderingComponent(const FObjectInitializer& ObjectInitializer);

};

