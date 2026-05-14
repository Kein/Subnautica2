#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "ConstructSettings.generated.h"

class ASN2BuilderPreviewArrow;
class UMaterialInterface;
class UUWEPingData;

USTRUCT(BlueprintType)
struct FConstructSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float InteractDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float StickyTargetThresholdAngle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float StickyTargetDistanceMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 RotationStep;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ConstructionSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ConstructFinishDuration;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UMaterialInterface> GhostOverlayMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UMaterialInterface> GhostMaterialOverride;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName IsValidMaterialParam;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName IsDeconstructMaterialParam;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName IsPersistentMaterialParam;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName ShowBlockingHighlightParam;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName CameraOffsetAmountParam;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName IsSelectedMaterialParam;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName ConstructionProgressParam;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName FinishingProgressParam;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName ConstructionWorldBoundingBoxMin;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName ConstructionWorldBoundingBoxMax;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName GhostValidColor;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName GhostIsMoving;
    
    UPROPERTY(EditAnywhere)
    UUWEPingData* RefundPingData;
    
    UPROPERTY(EditAnywhere)
    FText RefundText;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ASN2BuilderPreviewArrow> DirectionalPreviewArrow;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BaseSnapRadius;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float FloorSnapDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float CeilingSnapDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float WallMouldingStandoff;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<FGameplayTag, float> WallMouldingStandoffOverrides;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 SurfaceSnapping;
    
    SUBNAUTICA2_API FConstructSettings();
};

