#include "SN2EditBrush.h"

FSN2EditBrush::FSN2EditBrush() {
    this->UsedToRepresentItemBrushCost = false;
    this->OverrideModeBrushType = false;
    this->AllowEditModeChanging = false;
    this->ShowSnappingIconInHUD = false;
    this->EditType = ESN2BaseEditType::None;
    this->BrushMode = Selection;
    this->PiecePlacementMode = ESN2PiecePlacementMode::OffsetFromSelection;
    this->bOverrideInteractDistance = false;
    this->InteractDistance = 0.00f;
    this->OnlyEditOccupiedCells = false;
    this->OnlyEditUnoccupiedCells = false;
    this->ShowInvalidPreviewActorAtDefaultPosition = false;
    this->ShowInvalidSelectionHighlight = false;
    this->EnableOverlapSnapping = false;
    this->EnableLegalitySnapping = false;
    this->ShowPreviewArrows = false;
    this->PieceToPlace = NULL;
    this->AllowSnappingToggleForInitialPiece = false;
    this->EmbedActor = false;
    this->UseAsDefaultInvalidBrush = false;
}

