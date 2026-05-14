#pragma once
#include "CoreMinimal.h"
#include "Components/ContentWidget.h"
#include "OnWidgetInViewDelegate.h"
#include "UWELazyWidget.generated.h"

class UUserWidget;

UCLASS()
class UWECOMMONUI_API UUWELazyWidget : public UContentWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<UUserWidget> WidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Width;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Height;
    
    UPROPERTY(BlueprintAssignable)
    FOnWidgetInView OnWidgetInView;
    
public:
    UUWELazyWidget();

};

