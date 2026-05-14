#include "AbilityInfoData.h"

FAbilityInfoData::FAbilityInfoData() {
    this->TextOverrideType = ETextOverrideType::None;
    this->ShowByToolbar = false;
    this->bHightlightTarget = false;
    this->bCanActivate = false;
    this->bAlwaysDisplayHint = false;
    this->AllowShowName = false;
    this->bForceShowName = false;
    this->bSuppressWhenNoInput = false;
}

