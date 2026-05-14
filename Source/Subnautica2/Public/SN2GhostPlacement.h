#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "EBuilderPlacementSurface.h"
#include "SN2BaseCellInfo.h"
#include "SN2GhostPlacement.generated.h"

class AActor;
class AUWESculpturalBaseActor;

USTRUCT(BlueprintType)
struct FSN2GhostPlacement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, SaveGame)
    FTransform PlacementTransform;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TWeakObjectPtr<AActor> AttachActor;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    EBuilderPlacementSurface PlacementSurface;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    bool Interior;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    bool IsOnGhost;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TArray<FGameplayTag> PlacementBrushTypes;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TArray<FGameplayTag> PlacementTags;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TArray<FVector> SamplePoints;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TArray<FSN2BaseCellInfo> SamplePointsCellInfo;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    FVector SamplePointsNormal;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    FGameplayTag HitBrushType;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    FIntVector HitCell;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    FVector HitLocation;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TWeakObjectPtr<AUWESculpturalBaseActor> HitBase;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TWeakObjectPtr<AUWESculpturalBaseActor> BaseSnappedTo;
    
    SUBNAUTICA2_API FSN2GhostPlacement();
};

