#include "SN2SubmarineSystemsWidget.h"

USN2SubmarineSystemsWidget::USN2SubmarineSystemsWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->Submarine = NULL;
}

void USN2SubmarineSystemsWidget::SetSubmarine(AUWESubmarine* InSubmarine) {
}

void USN2SubmarineSystemsWidget::OnPowerChanged(float PowerPercentage) {
}

void USN2SubmarineSystemsWidget::OnOxygenLevelChanged(float NewOxygenLevel) {
}

void USN2SubmarineSystemsWidget::OnFilterEfficiencyChanged(float NewFilterEfficiency, float OldFilterEfficiency) {
}

void USN2SubmarineSystemsWidget::OnAlignmentChanged(float Alignment) {
}

void USN2SubmarineSystemsWidget::NativeOnFloodLevelChanged(float NewFloodLevel) {
}







