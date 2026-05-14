#pragma once
#include "CoreMinimal.h"
#include "EMercunaLevelOfDetail.h"
#include "MercunaNavVolume.h"
#include "MercunaNavOctreeVolume.generated.h"

class AMercunaNavOctree;

UCLASS()
class MERCUNA_API AMercunaNavOctreeVolume : public AMercunaNavVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<AMercunaNavOctree> NavOctree;
    
    UPROPERTY(EditAnywhere)
    EMercunaLevelOfDetail LOD;
    
    UPROPERTY(EditAnywhere)
    bool FullDetailBuild;
    
public:
    AMercunaNavOctreeVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveFromOctree();
    
    UFUNCTION(BlueprintCallable)
    void AddToOctree(AMercunaNavOctree* NewNavOctree);
    
};

