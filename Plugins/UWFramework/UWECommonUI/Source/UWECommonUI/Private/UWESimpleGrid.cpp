#include "UWESimpleGrid.h"

UUWESimpleGrid::UUWESimpleGrid() {
    this->NumColumns = 0;
    this->NumRows = 0;
    this->SlotMinHeight = 0.00f;
}

void UUWESimpleGrid::SetSlotPadding(const FMargin& InSlotPadding) {
}

void UUWESimpleGrid::SetSlotMinHeight(float InSlotMinHeight) {
}

void UUWESimpleGrid::SetNumRows(int32 InNumRows) {
}

void UUWESimpleGrid::SetNumColumns(int32 InNumColumns) {
}

void UUWESimpleGrid::SetExplicitNavigationOverride(EUINavigation Direction, UWidget* Widget) {
}

FMargin UUWESimpleGrid::GetSlotPadding() const {
    return FMargin{};
}

int32 UUWESimpleGrid::GetNumRows() const {
    return 0;
}

int32 UUWESimpleGrid::GetNumColumns() const {
    return 0;
}

void UUWESimpleGrid::ClearExplicitNavigationOverride(EUINavigation Direction) {
}


