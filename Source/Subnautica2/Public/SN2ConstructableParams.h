#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SerializedEditAction.h"
#include "UWESculpturalBaseCellCost.h"
#include "SN2GhostPlacement.h"
#include "SN2PlacementParams.h"
#include "UWEPlacementVolumeData.h"
#include "SN2ConstructableParams.generated.h"

class AActor;
class ASN2GhostCustomizer;

USTRUCT(BlueprintType)
struct FSN2ConstructableParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float BuildTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TArray<FUWESculpturalBaseCellCost> ResourceCost;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    TSoftClassPtr<AActor> ActorClassToConstruct;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    TSoftClassPtr<ASN2GhostCustomizer> GhostCustomizer;
    
    UPROPERTY(SaveGame)
    FSerializedEditAction SerializedEditAction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    bool bSpawnAsDynamicItem;
    
    UPROPERTY(SaveGame)
    bool ApplyInverseEditOnDeconstruct;
    
    UPROPERTY(SaveGame)
    bool IsEmbeddedActor;
    
    UPROPERTY(SaveGame)
    bool UseSoftLock;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    FSN2GhostPlacement Placement;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    FSN2PlacementParams GhostPlacementParams;
    
    UPROPERTY(SaveGame)
    TArray<bool> bHasAnchor;
    
    UPROPERTY(SaveGame)
    TArray<FVector> Anchors;
    
    UPROPERTY(SaveGame)
    TArray<bool> bUseAnchorForSamplePoints;
    
    UPROPERTY(SaveGame)
    TArray<float> AnchorSampleRadii;
    
    UPROPERTY(SaveGame)
    TArray<FUWEPlacementVolumeData> PlacementVolumes;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    bool bAllowDeconstruct;
    
    SUBNAUTICA2_API FSN2ConstructableParams();
};

