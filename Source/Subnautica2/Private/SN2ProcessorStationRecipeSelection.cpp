#include "SN2ProcessorStationRecipeSelection.h"
#include "Templates/SubclassOf.h"

USN2ProcessorStationRecipeSelection::USN2ProcessorStationRecipeSelection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProcessorWidgetClass = NULL;
    this->Widget = NULL;
    this->DistanceTask = NULL;
}

void USN2ProcessorStationRecipeSelection::OnWidgetPopped(TEnumAsByte<EUWEWindowManagerLayer> LayerId, bool bIsLast, TSubclassOf<UCommonActivatableWidget> Class) {
}

void USN2ProcessorStationRecipeSelection::CloseUI() {
}


