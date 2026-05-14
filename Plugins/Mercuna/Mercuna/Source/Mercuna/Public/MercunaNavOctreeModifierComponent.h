#pragma once
#include "CoreMinimal.h"
#include "MercunaNavModifierComponent.h"
#include "MercunaNavOctreeModifierComponent.generated.h"

class AMercunaNavOctree;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MERCUNA_API UMercunaNavOctreeModifierComponent : public UMercunaNavModifierComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditInstanceOnly)
    TSoftObjectPtr<AMercunaNavOctree> NavOctree;
    
public:
    UMercunaNavOctreeModifierComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveFromOctree();
    
    UFUNCTION(BlueprintCallable)
    void AddToOctree(AMercunaNavOctree* NewNavOctree);
    
};

