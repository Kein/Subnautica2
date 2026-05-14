#pragma once
#include "CoreMinimal.h"
#include "ReplicationGraph.h"
#include "UWEReplicationGraphNode_AlwaysRelevant_ForConnection.generated.h"

UCLASS(NonTransient)
class UWENETWORKING_API UUWEReplicationGraphNode_AlwaysRelevant_ForConnection : public UReplicationGraphNode_AlwaysRelevant_ForConnection {
    GENERATED_BODY()
public:
    UUWEReplicationGraphNode_AlwaysRelevant_ForConnection();

};

