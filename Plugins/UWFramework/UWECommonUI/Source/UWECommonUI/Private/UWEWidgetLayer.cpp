#include "UWEWidgetLayer.h"
#include "Templates/SubclassOf.h"

UUWEWidgetLayer::UUWEWidgetLayer() {
    this->Layer = Bottom;
}

void UUWEWidgetLayer::RemoveNamedWidget(FName Name) {
}

UCommonUserWidget* UUWEWidgetLayer::AddNamedWidget(TSubclassOf<UCommonUserWidget> WidgetClass, FName Name) {
    return NULL;
}


