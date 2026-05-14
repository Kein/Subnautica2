#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "MercunaNavGraph.generated.h"

class AMercunaNavDataChunk;
class AMercunaNavGraph;
class AMercunaNavVolume;
class UMerNavGraphRenderingComponent;

UCLASS(Abstract, Config=Engine)
class MERCUNA_API AMercunaNavGraph : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMercunaRebuildComplete, const AActor*, Volume, bool, Success);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMercunaNavGraphUpdate, const FBox, WorldBounds, const FBox, RelBounds);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMercunaLoadComplete);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FMercunaChunkEnabled, FBox, Bounds, FIntVector, ChunkCoords, const AMercunaNavDataChunk*, Chunk, const AMercunaNavGraph*, NavGraph);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FMercunaChunkDisabled, FBox, Bounds, FIntVector, ChunkCoords, const AMercunaNavGraph*, NavGraph);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FMercunaChunkDestroyed, FBox, Bounds, FIntVector, ChunkCoords, const AMercunaNavGraph*, NavGraph);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FMercunaChunkAdded, FBox, Bounds, FIntVector, ChunkCoords, const AMercunaNavDataChunk*, Chunk, const AMercunaNavGraph*, NavGraph);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMercunaBuildComplete, bool, Success);
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    float CellSize;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    TEnumAsByte<ECollisionChannel> GeometryCollisionChannel;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    FName ExcludeTag;
    
    UPROPERTY(Config, EditAnywhere)
    bool bNeverSave;
    
    UPROPERTY(Config, EditAnywhere)
    bool bAllowNavGraphMerging;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    bool bDisablePartitionOfNavData;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    FIntVector GenerationBoxesPerChunk;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    FGameplayTagContainer GameplayTags;
    
    UPROPERTY(EditAnywhere)
    bool bRecordGeometryCollectionStatistics;
    
    UPROPERTY(BlueprintAssignable, NonPIEDuplicateTransient)
    FMercunaChunkAdded OnChunkAdded;
    
    UPROPERTY(BlueprintAssignable, NonPIEDuplicateTransient)
    FMercunaChunkDestroyed OnChunkDestroyed;
    
    UPROPERTY(BlueprintAssignable, NonPIEDuplicateTransient)
    FMercunaChunkEnabled OnChunkEnabled;
    
    UPROPERTY(BlueprintAssignable, NonPIEDuplicateTransient)
    FMercunaChunkDisabled OnChunkDisabled;
    
    UPROPERTY(BlueprintAssignable, NonPIEDuplicateTransient)
    FMercunaNavGraphUpdate OnNavGraphUpdate;
    
protected:
    UPROPERTY()
    bool bBuildAsSublevel;
    
    UPROPERTY()
    bool bUsingChunks;
    
    UPROPERTY()
    bool bNeedsRebuild;
    
    UPROPERTY()
    FBox StreamingBounds;
    
    UPROPERTY()
    FTransform BuildTransform;
    
    UPROPERTY()
    FTransform LevelRelativeBuildTransform;
    
    UPROPERTY(Transient)
    TSet<TWeakObjectPtr<AMercunaNavVolume>> NavVolumes;
    
    UPROPERTY(Instanced, Transient, VisibleAnywhere)
    UMerNavGraphRenderingComponent* MerNavGraphRenderingComponent;
    
public:
    AMercunaNavGraph(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SaveToFile(const FString& Filename) const;
    
};

