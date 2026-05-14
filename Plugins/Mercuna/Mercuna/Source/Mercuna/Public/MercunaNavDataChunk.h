#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "MercunaNavDataChunk.generated.h"

class AMercunaNavGraph;
class UPhysicalMaterial;

UCLASS(NotPlaceable)
class MERCUNA_API AMercunaNavDataChunk : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(VisibleAnywhere)
    TSoftObjectPtr<AMercunaNavGraph> NavGraph;
    
    UPROPERTY(Transient)
    AMercunaNavGraph* NavGraphPtr;
    
    UPROPERTY()
    TMap<UPhysicalMaterial*, uint32> SurfaceMaterials;
    
    UPROPERTY()
    FBox DataChunkBounds;
    
    UPROPERTY()
    FIntVector DataChunkCoords;
    
    UPROPERTY()
    FVector RelativePosition;
    
    UPROPERTY()
    uint64 CRC;
    
public:
    AMercunaNavDataChunk(const FObjectInitializer& ObjectInitializer);

};

