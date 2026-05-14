#pragma once
#include "CoreMinimal.h"
#include "SN2PiecePlacementParams.generated.h"

USTRUCT(BlueprintType)
struct FSN2PiecePlacementParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool AlignPieceUpWithWorldUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool RotateToFacePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool AllowMismatchedEditedCellCulling;
    
    SUBNAUTICA2_API FSN2PiecePlacementParams();
};

