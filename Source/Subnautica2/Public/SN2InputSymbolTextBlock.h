#pragma once
#include "CoreMinimal.h"
#include "CommonInputTypeEnum.h"
#include "CommonUserWidget.h"
#include "Templates/SubclassOf.h"
#include "SN2InputSymbolTextBlock.generated.h"

class UCommonTextBlock;
class UCommonTextStyle;
class USN2InputGlyph;
class USN2InputGlyphFallback;
class UWrapBox;

UCLASS(EditInlineNew)
class SUBNAUTICA2_API USN2InputSymbolTextBlock : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Instanced)
    UWrapBox* WrapBox;
    
    UPROPERTY(BlueprintReadOnly)
    FString FullText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UCommonTextStyle> TextStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bHideWithMissingInputBinding;
    
private:
    UPROPERTY(Instanced)
    TArray<UCommonTextBlock*> UnusedTextBlocks;
    
    UPROPERTY(Instanced)
    TArray<USN2InputGlyph*> UnusedGlyphs;
    
    UPROPERTY(Instanced)
    TArray<USN2InputGlyphFallback*> UnusedGlyphFallbacks;
    
    UPROPERTY(Instanced)
    TArray<UCommonTextBlock*> TextBlocks;
    
    UPROPERTY(Instanced)
    TArray<USN2InputGlyph*> Glyphs;
    
    UPROPERTY(Instanced)
    TArray<USN2InputGlyphFallback*> GlyphFallbacks;
    
public:
    USN2InputSymbolTextBlock();

    UFUNCTION(BlueprintCallable)
    void SetText(const FString& Text);
    
private:
    UFUNCTION()
    void OnInputMethodChanged(ECommonInputType CurrentInputType);
    
    UFUNCTION()
    void OnControlMappingsRebuilt();
    
};

