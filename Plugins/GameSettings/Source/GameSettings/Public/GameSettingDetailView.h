#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Blueprint/UserWidgetPool.h"
#include "GameSettingDetailView.generated.h"

class UCommonRichTextBlock;
class UCommonTextBlock;
class UGameSetting;
class UGameSettingVisualData;
class UVerticalBox;

UCLASS(Abstract, EditInlineNew)
class GAMESETTINGS_API UGameSettingDetailView : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UGameSettingVisualData* VisualData;
    
    UPROPERTY(Transient)
    FUserWidgetPool ExtensionWidgetPool;
    
    UPROPERTY(Transient)
    UGameSetting* CurrentSetting;
    
private:
    UPROPERTY(BlueprintReadOnly, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_SettingName;
    
    UPROPERTY(BlueprintReadOnly, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* RichText_Description;
    
    UPROPERTY(BlueprintReadOnly, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* RichText_DynamicDetails;
    
    UPROPERTY(BlueprintReadOnly, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* RichText_WarningDetails;
    
    UPROPERTY(BlueprintReadOnly, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* RichText_DisabledDetails;
    
    UPROPERTY(BlueprintReadOnly, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* Box_DetailsExtension;
    
public:
    UGameSettingDetailView();

};

