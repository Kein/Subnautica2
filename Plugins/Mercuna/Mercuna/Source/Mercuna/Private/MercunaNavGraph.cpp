#include "MercunaNavGraph.h"

AMercunaNavGraph::AMercunaNavGraph(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bRelevantForLevelBounds = false;
    this->CellSize = 0.00f;
    this->GeometryCollisionChannel = ECC_Pawn;
    this->bNeverSave = false;
    this->bAllowNavGraphMerging = false;
    this->bDisablePartitionOfNavData = false;
    this->bRecordGeometryCollectionStatistics = false;
    this->bBuildAsSublevel = false;
    this->bUsingChunks = false;
    this->bNeedsRebuild = false;
    this->MerNavGraphRenderingComponent = NULL;
}

void AMercunaNavGraph::SaveToFile(const FString& Filename) const {
}


