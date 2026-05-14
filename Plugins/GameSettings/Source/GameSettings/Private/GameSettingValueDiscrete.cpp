#include "GameSettingValueDiscrete.h"

UGameSettingValueDiscrete::UGameSettingValueDiscrete() {
}

TArray<FText> UGameSettingValueDiscrete::GetDiscreteOptions() const {
    return TArray<FText>();
}

int32 UGameSettingValueDiscrete::GetDiscreteOptionIndex() const {
    return 0;
}

int32 UGameSettingValueDiscrete::GetDiscreteOptionDefaultIndex() const {
    return 0;
}


