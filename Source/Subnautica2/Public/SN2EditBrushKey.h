#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "SN2EditBrushKey.generated.h"

USTRUCT(BlueprintType)
struct FSN2EditBrushKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString EditorLabel;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsNearbyBase;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool MustHitBuildAhead;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTagContainer BrushTypes;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTagContainer ProhibitedBrushTypes;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag BaseBrushType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 AllowedSurfaces;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool AllowedInside;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool AllowedOutside;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool UseManualMappingForSelectionSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 SelectionSizeMappingID;
    
    SUBNAUTICA2_API FSN2EditBrushKey();
};
FORCEINLINE uint32 GetTypeHash(const FSN2EditBrushKey) { return 0; }

