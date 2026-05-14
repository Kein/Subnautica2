#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SerializedEditAction.h"
#include "SN2AppliedBaseChanges.h"
#include "SN2GhostPlacement.h"
#include "SN2GhostPrimitive.h"
#include "SN2BuilderGhostParams.generated.h"

class AActor;
class ASN2GhostCustomizer;
class UObject;
class UStaticMesh;

USTRUCT(BlueprintType)
struct FSN2BuilderGhostParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, SaveGame)
    TArray<FSN2GhostPrimitive> ExplicitGhostPrimitives;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    TArray<TSoftClassPtr<AActor>> SourceActors;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    TSoftClassPtr<ASN2GhostCustomizer> CustomGhostClass;
    
    UPROPERTY(SaveGame)
    FSN2GhostPlacement Placement;
    
    UPROPERTY(SaveGame)
    FSN2AppliedBaseChanges AppliedBaseChanges;
    
    UPROPERTY(SaveGame)
    FSerializedEditAction EditAction;
    
    UPROPERTY()
    TWeakObjectPtr<UObject> LiveEditAction;
    
    UPROPERTY(SaveGame)
    FTransform SculpturalBaseCellTransform;
    
    UPROPERTY(SaveGame)
    TArray<FIntVector> SelectedCells;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    TSoftObjectPtr<UStaticMesh> OverrideMesh;
    
    UPROPERTY(SaveGame)
    uint32 Flags;
    
    UPROPERTY(SaveGame)
    float OverlayCameraOffsetAmount;
    
    UPROPERTY(SaveGame)
    int32 CreatingPlayerID;
    
    SUBNAUTICA2_API FSN2BuilderGhostParams();
};

