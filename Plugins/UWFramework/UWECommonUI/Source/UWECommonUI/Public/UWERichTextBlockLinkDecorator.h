#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateTypes.h"
#include "Components/RichTextBlockDecorator.h"
#include "UWERichTextBlockLinkDecorator.generated.h"

UCLASS()
class UWECOMMONUI_API UUWERichTextBlockLinkDecorator : public URichTextBlockDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FHyperlinkStyle Style;
    
    UUWERichTextBlockLinkDecorator();

};

