#pragma once
#include "CoreMinimal.h"
#include "SN2SustainedHoverComponent.h"
#include "SN2ProximityTextPopup.generated.h"

class AActor;
class USN2AxumGlyphDataAsset;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2ProximityTextPopup : public USN2SustainedHoverComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FText VisibleText;
    
    UPROPERTY(EditAnywhere)
    TArray<USN2AxumGlyphDataAsset*> RequiredGlyphs;
    
    UPROPERTY(EditAnywhere)
    FText MissingGlyphsText;
    
public:
    USN2ProximityTextPopup(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TogglePopupActive(bool NewValue);
    
    UFUNCTION(BlueprintPure)
    bool IsMissingGlyphs() const;
    
    UFUNCTION()
    bool HasRequiredGlyphs() const;
    
    UFUNCTION(BlueprintPure)
    FText GetPopupText(const AActor* Instigator) const;
    
};

