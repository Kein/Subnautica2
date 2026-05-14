#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UWEItemProceduralMotionSettings.h"
#include "UWEItemAnimation.generated.h"

class UAnimInstance;

USTRUCT(BlueprintType)
struct UWEINVENTORY_API FUWEItemAnimation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector EquippedTranslationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator EquippedRotationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform EquippedMeshTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<UAnimInstance> EquippedAnimationBlueprint;
    
    UPROPERTY(Transient)
    UClass* CachedAnimBlueprintClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HolsterTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FUWEItemProceduralMotionSettings EquippedEffectorProceduralMotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName MorphTargetName;
    
    FUWEItemAnimation();
};

