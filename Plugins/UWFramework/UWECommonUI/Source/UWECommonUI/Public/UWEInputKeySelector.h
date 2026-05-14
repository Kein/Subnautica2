#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InputCoreTypes.h"
#include "Framework/Commands/InputChord.h"
#include "Styling/SlateTypes.h"
#include "Layout/Margin.h"
#include "Components/SlateWrapperTypes.h"
#include "Components/Widget.h"
#include "Templates/SubclassOf.h"
#include "UWEInputKeySelector.generated.h"

class UCommonTextStyle;

UCLASS()
class UWECOMMONUI_API UUWEInputKeySelector : public UWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnKeySelected, FInputChord, SelectedKey);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnIsSelectingKeyChanged);
    
    UPROPERTY(BlueprintAssignable)
    FOnKeySelected OnKeySelected;
    
    UPROPERTY(BlueprintAssignable)
    FOnIsSelectingKeyChanged OnIsSelectingKeyChanged;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D IconSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMargin TextPadding;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UCommonTextStyle> TextStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FButtonStyle WidgetStyle;
    
    UPROPERTY(BlueprintReadWrite)
    FInputChord SelectedKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMargin Margin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText KeySelectionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText NoKeySpecifiedText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAllowModifierKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAllowGamepadKeys;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FKey> EscapeKeys;
    
public:
    UUWEInputKeySelector();

    UFUNCTION(BlueprintCallable)
    void SetTextBlockVisibility(const ESlateVisibility InVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetStyle(TSubclassOf<UCommonTextStyle> InStyle);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedKey(const FInputChord& InSelectedKey);
    
    UFUNCTION(BlueprintCallable)
    void SetNoKeySpecifiedText(FText InNoKeySpecifiedText);
    
    UFUNCTION(BlueprintCallable)
    void SetKeySelectionText(FText InKeySelectionText);
    
    UFUNCTION(BlueprintCallable)
    void SetIconSize(FVector2D NewSize);
    
    UFUNCTION(BlueprintCallable)
    void SetEscapeKeys(const TArray<FKey>& InKeys);
    
    UFUNCTION(BlueprintCallable)
    void SetAllowModifierKeys(bool bInAllowModifierKeys);
    
    UFUNCTION(BlueprintCallable)
    void SetAllowGamepadKeys(bool bInAllowGamepadKeys);
    
    UFUNCTION(BlueprintPure)
    bool GetIsSelectingKey() const;
    
};

