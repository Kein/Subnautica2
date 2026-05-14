#include "MercunaNavGraph2D.h"
#include "MerNavGridRenderingComponent.h"

AMercunaNavGraph2D::AMercunaNavGraph2D(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UMerNavGridRenderingComponent>(TEXT("MerNavGridRenderingComponent"));
    this->MerNavGraphRenderingComponent = (UMerNavGraphRenderingComponent*)RootComponent;
    this->bUsePhysicalMaterials = true;
    this->bUseNavSeeds = true;
    this->bRemoveUnseeded = true;
    this->DebugDrawMode = EMerGridDebugDrawMode::DISABLED;
    this->DebugDrawSubmode = EMerGridDebugDrawSubmode::NAVIGABLE;
    this->NextMaterialId = 0;
}


