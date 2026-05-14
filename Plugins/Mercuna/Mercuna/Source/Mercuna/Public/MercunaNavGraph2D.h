#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EMerGridDebugDrawMode.h"
#include "EMerGridDebugDrawSubmode.h"
#include "MercunaAgentType.h"
#include "MercunaNavGraph.h"
#include "MercunaNavGraph.h"
#include "MercunaNavGraph.h"
#include "MercunaNavGraph.h"
#include "MercunaSupportedAgentTypes.h"
#include "MercunaNavGraph2D.generated.h"

class UPhysicalMaterial;

UCLASS(Abstract, Config=Engine)
class MERCUNA_API AMercunaNavGraph2D : public AMercunaNavGraph {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    bool bUsePhysicalMaterials;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    TArray<UPhysicalMaterial*> PhysicalMaterialPriorities;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    FMercunaSupportedAgentTypes SupportedAgentTypes;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bUseNavSeeds;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bRemoveUnseeded;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    FName UnnavigableTag;
    
    UPROPERTY(BlueprintAssignable, NonPIEDuplicateTransient)
    AMercunaNavGraph::FMercunaBuildComplete OnBuildComplete;
    
    UPROPERTY(BlueprintAssignable, NonPIEDuplicateTransient)
    AMercunaNavGraph::FMercunaRebuildComplete OnRebuildComplete;
    
    UPROPERTY(BlueprintAssignable, NonPIEDuplicateTransient)
    AMercunaNavGraph::FMercunaLoadComplete OnLoadComplete;
    
protected:
    UPROPERTY(Transient)
    EMerGridDebugDrawMode DebugDrawMode;
    
    UPROPERTY(Transient)
    EMerGridDebugDrawSubmode DebugDrawSubmode;
    
    UPROPERTY(Transient)
    FMercunaAgentType DebugDrawAgentType;
    
    UPROPERTY()
    uint32 NextMaterialId;
    
    UPROPERTY()
    TMap<UPhysicalMaterial*, uint32> SurfaceMaterials;
    
    UPROPERTY()
    FVector NavLinkBorder;
    
public:
    AMercunaNavGraph2D(const FObjectInitializer& ObjectInitializer);

};

