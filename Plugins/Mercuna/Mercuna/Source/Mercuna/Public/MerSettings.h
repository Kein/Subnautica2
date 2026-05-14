#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EMercunaNavGraphVolumeOrientation.h"
#include "EMercunaWorkerThreadType.h"
#include "MercunaGroundAgentProperties.h"
#include "MercunaSurfaceAgentProperties.h"
#include "MerSettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class MERCUNA_API UMerSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    float DebugLengthScale;
    
    UPROPERTY(Config, EditAnywhere)
    bool bAlwaysShowErrors;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FName> ModifierUsageTypes;
    
    UPROPERTY(Config, EditAnywhere)
    TMap<FName, FMercunaGroundAgentProperties> GroundAgentTypes;
    
    UPROPERTY(Config, EditAnywhere)
    TMap<FName, FMercunaSurfaceAgentProperties> SurfaceAgentTypes;
    
    UPROPERTY(Config, EditAnywhere)
    bool bAutoLinkNavVolumesWithGraphs;
    
    UPROPERTY(Config, EditAnywhere)
    EMercunaNavGraphVolumeOrientation AlignGraphAndVolumeOrientations;
    
    UPROPERTY(Config, EditAnywhere)
    double GeometryCollectionTimePerFrame;
    
    UPROPERTY(Config, EditAnywhere)
    float SingleThreadedJobTimePerFrame;
    
    UPROPERTY(Config, EditAnywhere)
    EMercunaWorkerThreadType WorkerThreadType;
    
    UPROPERTY(Config, EditAnywhere)
    int32 NumMercunaWorkThreads;
    
    UPROPERTY(Config, EditAnywhere)
    bool bIgnoreStepForHeightClearance;
    
    UPROPERTY(Config, EditAnywhere)
    bool bWarnIfSubLevelNavGraphsNotBuiltInPersistentLevel;
    
    UPROPERTY(Config, EditAnywhere)
    bool bRemoveUnseededNavGraphDataOnCook;
    
    UPROPERTY(Config, EditAnywhere)
    bool bAllowNavGraphMerging;
    
    UPROPERTY(Config, EditAnywhere)
    float OctreeCellSize;
    
    UPROPERTY(Config, EditAnywhere)
    int32 MinPawnRadius;
    
    UPROPERTY(Config, EditAnywhere)
    int32 MaxPawnRadius;
    
    UMerSettings();

};

