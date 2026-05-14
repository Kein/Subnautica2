#include "UWEBTCUtilitySelector.h"

UUWEBTCUtilitySelector::UUWEBTCUtilitySelector() {
    this->NodeName = TEXT("Utility Selector");
    this->RankGatheringType = UWEAIUtilityRankGatheringType::BakedLeftToRight;
    this->WeightSelectionType = UWEAIUtilityWeightSelectionType::Highest;
}


