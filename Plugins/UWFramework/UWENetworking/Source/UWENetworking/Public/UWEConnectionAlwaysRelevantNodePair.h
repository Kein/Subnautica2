#pragma once
#include "CoreMinimal.h"
#include "UWEConnectionAlwaysRelevantNodePair.generated.h"

class UNetConnection;
class UReplicationGraphNode_AlwaysRelevant_ForConnection;

USTRUCT(BlueprintType)
struct FUWEConnectionAlwaysRelevantNodePair {
    GENERATED_BODY()
public:
    UPROPERTY()
    UNetConnection* NetConnection;
    
    UPROPERTY()
    UReplicationGraphNode_AlwaysRelevant_ForConnection* node;
    
    UWENETWORKING_API FUWEConnectionAlwaysRelevantNodePair();
};

