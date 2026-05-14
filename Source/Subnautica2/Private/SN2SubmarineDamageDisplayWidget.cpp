#include "SN2SubmarineDamageDisplayWidget.h"

USN2SubmarineDamageDisplayWidget::USN2SubmarineDamageDisplayWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->DamageWidgetClass = NULL;
    this->Panel = NULL;
}

void USN2SubmarineDamageDisplayWidget::OnDamageChanged() {
}


