#include "SN2BioreactorInteractBoxComponent.h"
#include "Templates/SubclassOf.h"

USN2BioreactorInteractBoxComponent::USN2BioreactorInteractBoxComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BioreactorWidgetClass = NULL;
    this->Widget = NULL;
    this->DistanceTask = NULL;
}

void USN2BioreactorInteractBoxComponent::OnWidgetPopped(TEnumAsByte<EUWEWindowManagerLayer> LayerId, bool bIsLast, TSubclassOf<UCommonActivatableWidget> Class) {
}

void USN2BioreactorInteractBoxComponent::CloseUI() {
}


