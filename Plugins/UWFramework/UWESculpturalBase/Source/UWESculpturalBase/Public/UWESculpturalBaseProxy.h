#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/HitResult.h"
#include "UWEGreedyMeshID.h"
#include "UWEMaterialParameterKey.h"
#include "UWEMeshHandle.h"
#include "UWEProxyMaterialKey.h"
#include "UWERenderMeshHandle.h"
#include "UWEStableIndexISM.h"
#include "UWESculpturalBaseProxy.generated.h"

class AUWESculpturalBaseActor;
class UMaterialInstanceDynamic;
class UUWEGreedyMeshingComponent;

UCLASS()
class UWESCULPTURALBASE_API AUWESculpturalBaseProxy : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TMap<FUWEMeshHandle, FUWEStableIndexISM> CollisionMeshes;
    
    UPROPERTY()
    TMap<FUWERenderMeshHandle, FUWEStableIndexISM> RenderMeshes;
    
    UPROPERTY(Instanced)
    TMap<FUWEGreedyMeshID, UUWEGreedyMeshingComponent*> OverlapGreedyMeshers;
    
    UPROPERTY()
    TMap<FUWEProxyMaterialKey, UMaterialInstanceDynamic*> DynamicMaterials;
    
    UPROPERTY()
    TMap<FUWEMaterialParameterKey, float> MaterialScalarParameters;
    
    UPROPERTY()
    TMap<FUWEMaterialParameterKey, FVector> MaterialVectorParameters;
    
    UPROPERTY(Replicated)
    FGuid OwnerGuid;
    
    UPROPERTY(Replicated)
    FIntVector ProxyChunkCoords;
    
    UPROPERTY(Replicated)
    FVector CellOriginOffset;
    
    UPROPERTY(Replicated)
    bool NeedsOverlapVolumes;
    
    UPROPERTY(Replicated)
    uint32 ReplicationTest;
    
public:
    AUWESculpturalBaseProxy(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    bool TryGetCellCoordsAndNormalFromHitResult(FHitResult Hit, FIntVector& CoordsOut, FVector& NormalOut);
    
    UFUNCTION(BlueprintCallable)
    AUWESculpturalBaseActor* GetBase();
    
};

