#pragma once
#include "CoreMinimal.h"
#include "Components/PanelWidget.h"
#include "GameResponsivePanel.generated.h"

class UGameResponsivePanelSlot;
class UWidget;

UCLASS()
class UGameResponsivePanel : public UPanelWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bCanStackVertically;
    
    UGameResponsivePanel();

    UFUNCTION(BlueprintCallable)
    UGameResponsivePanelSlot* AddChildToGameResponsivePanel(UWidget* Content);
    
};

