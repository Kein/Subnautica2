#pragma once
#include "CoreMinimal.h"
#include "ReplicationGraph.h"
#include "UWEConnectionAlwaysRelevantNodePair.h"
#include "UWEReplicationGraph.generated.h"

class UReplicationGraphNode_ActorListFrequencyBuckets;
class UReplicationGraphNode_GridSpatialization2D;

UCLASS(NonTransient)
class UWENETWORKING_API UUWEReplicationGraph : public UReplicationGraph {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UReplicationGraphNode_GridSpatialization2D* GridNode;
    
    UPROPERTY()
    UReplicationGraphNode_ActorListFrequencyBuckets* AlwaysRelevantNode;
    
    UPROPERTY()
    TArray<FUWEConnectionAlwaysRelevantNodePair> AlwaysRelevantForConnectionList;
    
public:
    UUWEReplicationGraph();

};

