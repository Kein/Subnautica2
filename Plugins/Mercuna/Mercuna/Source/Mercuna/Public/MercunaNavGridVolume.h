#pragma once
#include "CoreMinimal.h"
#include "MercunaNavVolume.h"
#include "MercunaNavGridVolume.generated.h"

class AMercunaNavGraph2D;

UCLASS()
class MERCUNA_API AMercunaNavGridVolume : public AMercunaNavVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<AMercunaNavGraph2D> NavGrid;
    
public:
    AMercunaNavGridVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveFromGrid();
    
    UFUNCTION(BlueprintCallable)
    void AddToGrid(AMercunaNavGraph2D* NewNavGrid);
    
};

