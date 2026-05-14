#include "SN2CraftingCategoryItem.h"

USN2CraftingCategoryItem::USN2CraftingCategoryItem() : UUserWidget(FObjectInitializer::Get()) {
    this->Recipe = NULL;
    this->Icon = NULL;
    this->CategoryText = NULL;
    this->CategoryButton = NULL;
    this->LeafButton = NULL;
}

void USN2CraftingCategoryItem::HandleButtonClicked() {
}

FText USN2CraftingCategoryItem::GetToolTipText() {
    return FText::GetEmpty();
}


