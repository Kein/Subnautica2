#pragma once
#include "CoreMinimal.h"
#include "CommonRichTextBlock.h"
#include "OnLinkClickedDelegate.h"
#include "UWERichTextBlockWithLinks.generated.h"

class UDataTable;

UCLASS()
class UWECOMMONUI_API UUWERichTextBlockWithLinks : public UCommonRichTextBlock {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable)
    FOnLinkClicked OnLinkClicked;
    
    UPROPERTY(Transient)
    UDataTable* RuntimeTextStyleSet;
    
    UPROPERTY(Transient)
    UDataTable* BaseTextStyleSet;
    
public:
    UUWERichTextBlockWithLinks();

};

