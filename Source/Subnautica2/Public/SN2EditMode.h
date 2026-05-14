#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SN2EditBrush.h"
#include "SN2EditBrushKey.h"
#include "SN2ReasonOverrides.h"
#include "SN2EditMode.generated.h"

class AActor;
class UTexture2D;

USTRUCT(BlueprintType)
struct FSN2EditMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString EditorLabel;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FSN2EditBrushKey, FSN2EditBrush> EditBrushes;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag BrushType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsDeconstruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FString> DefaultPrimaryInputPromptKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FString> DefaultSecondaryInputPromptKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UTexture2D> DefaultModeTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag DefaultCannotActivateReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSN2ReasonOverrides CannotActivateReasonOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<AActor> DefaultInvalidPreviewActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool OverrideDefaultInvalidPreviewActorDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InvalidPreviewActorDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool OverrideTraceDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TraceDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IgnoreBuildAhead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool AllowModeChangingWithNoBrush;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag OnModeEnterCue;
    
    SUBNAUTICA2_API FSN2EditMode();
};

