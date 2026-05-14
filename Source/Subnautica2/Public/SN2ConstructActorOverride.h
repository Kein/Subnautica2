#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SN2ConstructActorOverride.generated.h"

class AActor;
class ASN2GhostCustomizer;
class UStaticMesh;

USTRUCT(BlueprintType)
struct FSN2ConstructActorOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<AActor> ActorClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTransform PlacementOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UStaticMesh> GhostMeshOverride;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<ASN2GhostCustomizer> CustomGhost;
    
    SUBNAUTICA2_API FSN2ConstructActorOverride();
};

