#pragma once
#include "CoreMinimal.h"
#include "UWEItemProceduralMotionSettings.generated.h"

USTRUCT(BlueprintType)
struct UWEINVENTORY_API FUWEItemProceduralMotionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EffectorGlobalMovementScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EffectorPositionFromPlayerTurnStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EffectorPositionFromPlayerMovementDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EffectorPositionFromPlayerMovementDampen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EffectorYawFromPlayerTurnStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EffectorRollFromPlayerTurnStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EffectorRollFromPlayerMovementAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EffectorAnimPassthroughStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EffectorAnimPassthroughRandomStrengthMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EffectorAnimPassthroughRandomStrengthMax;
    
    FUWEItemProceduralMotionSettings();
};

