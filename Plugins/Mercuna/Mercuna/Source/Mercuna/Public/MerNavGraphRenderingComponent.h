#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "MerNavGraphRenderingComponent.generated.h"

class UMaterialInterface;

UCLASS(Abstract, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMerNavGraphRenderingComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool bDrawChunkBounds;
    
    UPROPERTY()
    TArray<UMaterialInterface*> Materials;
    
    UPROPERTY(Transient)
    TArray<TSoftObjectPtr<UMaterialInterface>> MaterialsToLoad;
    
public:
    UMerNavGraphRenderingComponent(const FObjectInitializer& ObjectInitializer);

};

