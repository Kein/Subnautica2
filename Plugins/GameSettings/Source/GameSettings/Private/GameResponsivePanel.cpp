#include "GameResponsivePanel.h"
#include "Components/SlateWrapperTypes.h"

UGameResponsivePanel::UGameResponsivePanel() {
    this->bIsVariable = false;
    this->Visibility = ESlateVisibility::SelfHitTestInvisible;
    this->bCanStackVertically = true;
}

UGameResponsivePanelSlot* UGameResponsivePanel::AddChildToGameResponsivePanel(UWidget* Content) {
    return NULL;
}


