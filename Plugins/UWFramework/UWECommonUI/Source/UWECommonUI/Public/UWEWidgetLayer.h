#pragma once
#include "CoreMinimal.h"
#include "Widgets/CommonActivatableWidgetContainer.h"
#include "EUWEWindowManagerLayer.h"
#include "Templates/SubclassOf.h"
#include "UWEWidgetLayer.generated.h"

class UCommonUserWidget;

UCLASS()
class UWECOMMONUI_API UUWEWidgetLayer : public UCommonActivatableWidgetStack {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EUWEWindowManagerLayer> Layer;
    
public:
    UUWEWidgetLayer();

    UFUNCTION(BlueprintCallable)
    void RemoveNamedWidget(FName Name);
    
    UFUNCTION(BlueprintCallable)
    UCommonUserWidget* AddNamedWidget(TSubclassOf<UCommonUserWidget> WidgetClass, FName Name);
    
};

