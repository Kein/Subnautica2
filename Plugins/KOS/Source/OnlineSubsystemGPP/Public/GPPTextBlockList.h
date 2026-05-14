#pragma once
#include "CoreMinimal.h"
#include "Fonts/SlateFontInfo.h"
#include "Blueprint/UserWidget.h"
#include "GPPTextBlockList.generated.h"

class UAutoWrapTextBlock;
class UHorizontalBox;
class UTextBlock;
class UVerticalBox;

UCLASS(EditInlineNew)
class ONLINESUBSYSTEMGPP_API UGPPTextBlockList : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UVerticalBox* VerticalBox;
    
    UPROPERTY(Instanced)
    TArray<UHorizontalBox*> HorizontalBoxList;
    
    UPROPERTY(Instanced)
    TArray<UTextBlock*> TB_HeaderList;
    
    UPROPERTY(Instanced)
    TArray<UAutoWrapTextBlock*> TB_TextList;
    
    UPROPERTY(EditAnywhere)
    float HeaderWidth;
    
    UPROPERTY(EditAnywhere)
    FSlateFontInfo HeaderFont;
    
    UPROPERTY(EditAnywhere)
    FSlateFontInfo TextFont;
    
    UPROPERTY(EditAnywhere)
    FText HeaderText;
    
    UPROPERTY(EditAnywhere)
    TArray<FText> TextList;
    
public:
    UGPPTextBlockList();

};

