#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "UWESelectionParams.h"
#include "ESN2BaseEditType.h"
#include "ESN2EditBrushMode.h"
#include "ESN2PiecePlacementMode.h"
#include "SN2CollisionTestParams.h"
#include "SN2EmbeddedActorParams.h"
#include "SN2PiecePlacementParams.h"
#include "SN2PlacementParams.h"
#include "SN2ReasonOverrides.h"
#include "SN2EditBrush.generated.h"

class AActor;
class ASN2GhostCustomizer;
class AUWESculpturalBaseActor;
class UTexture2D;
class UUWEBaseInitialPieceData;

USTRUCT(BlueprintType)
struct FSN2EditBrush {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString EditorLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool UsedToRepresentItemBrushCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool OverrideModeBrushType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag BrushTypeOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool AllowEditModeChanging;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSN2CollisionTestParams CollisionTestParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag InteractionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FString> PrimaryInputPromptKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FString> SecondaryInputPromptKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSN2ReasonOverrides CannotActivateReasonOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UTexture2D> ModeTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ShowSnappingIconInHUD;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ESN2BaseEditType EditType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ESN2EditBrushMode> BrushMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESN2PiecePlacementMode PiecePlacementMode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSN2PiecePlacementParams PiecePlacementParams;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FUWESelectionParams SelectionParams;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bOverrideInteractDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float InteractDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIntVector EditedCellsOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool OnlyEditOccupiedCells;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool OnlyEditUnoccupiedCells;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<AActor> InvalidPreviewActor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ShowInvalidPreviewActorAtDefaultPosition;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ShowInvalidSelectionHighlight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool EnableOverlapSnapping;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool EnableLegalitySnapping;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ShowPreviewArrows;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UUWEBaseInitialPieceData* PieceToPlace;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<AUWESculpturalBaseActor> InitialPieceActor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<ASN2GhostCustomizer> InitialPieceCustomGhost;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSN2PlacementParams InitialPiecePlacementParams;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool AllowSnappingToggleForInitialPiece;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool EmbedActor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSN2EmbeddedActorParams EmbedParams;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool UseAsDefaultInvalidBrush;
    
    SUBNAUTICA2_API FSN2EditBrush();
};

