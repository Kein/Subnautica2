#pragma once
#include "CoreMinimal.h"
#include "CommonButtonBase.h"
#include "CommonUITextButtonBase.generated.h"

class UCommonTextBlock;

UCLASS(EditInlineNew)
class UWECOMMONUI_API UCommonUITextButtonBase : public UCommonButtonBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UCommonTextBlock* TextLabel;
    
public:
    UCommonUITextButtonBase();

    UFUNCTION(BlueprintCallable)
    void SetText(FText InText);
    
};

