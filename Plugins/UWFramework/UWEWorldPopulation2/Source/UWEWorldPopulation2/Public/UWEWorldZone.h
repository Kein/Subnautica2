#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "UWEWorldZone.generated.h"

class UUWESeededCreatureDataAsset;
class UUWESeededResourceDataAsset;
class UUWESpatialDataStorageDataAsset;
class UUWEWorldRegionDataAsset;

UCLASS(Abstract)
class UWEWORLDPOPULATION2_API AUWEWorldZone : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UUWEWorldRegionDataAsset> Region;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UUWESpatialDataStorageDataAsset> SpatialDataStorage;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UUWESeededResourceDataAsset> SeededResources;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UUWESeededCreatureDataAsset> SeededCreatures;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FGuid ZoneGUID;
    
private:
    UPROPERTY(Transient)
    UUWEWorldRegionDataAsset* RegionAsset;
    
public:
    AUWEWorldZone(const FObjectInitializer& ObjectInitializer);

};

