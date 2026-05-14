#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UWEDialogueSequence.h"
#include "UWEAlertSequence.generated.h"

class UTexture2D;

UCLASS(EditInlineNew)
class UWEDIALOGUE_API UUWEAlertSequence : public UUWEDialogueSequence {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FLinearColor AlertColorTint;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UTexture2D> AlertIcon;
    
    UUWEAlertSequence();

    UFUNCTION(BlueprintPure)
    bool IsCritical() const;
    
};

