#pragma once
#include "CoreMinimal.h"
#include "SN2BlightNode.h"
#include "SN2BlightCore.generated.h"

class USN2BlightNodeDataAsset;

UCLASS()
class SUBNAUTICA2_API ASN2BlightCore : public ASN2BlightNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TArray<USN2BlightNodeDataAsset*> AssociatedNodes;
    
public:
    ASN2BlightCore(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnNodeRemediatedChanged(USN2BlightNodeDataAsset* RemediatedDataAsset, bool NewRemediatedState);
    
public:
    UFUNCTION(BlueprintPure)
    int32 GetNumUnremediatedAssociatedNodes();
    
    UFUNCTION(BlueprintPure)
    int32 GetNumAssociatedNodes() const;
    
};

