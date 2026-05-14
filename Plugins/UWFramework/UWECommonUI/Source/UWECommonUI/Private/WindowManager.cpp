#include "WindowManager.h"
#include "Templates/SubclassOf.h"

UWindowManager::UWindowManager() {
    this->MainScreen = NULL;
}

void UWindowManager::Show() {
}

UCommonActivatableWidget* UWindowManager::SetWidgetOnLayer(TEnumAsByte<EUWEWindowManagerLayer> LayerId, TSubclassOf<UCommonActivatableWidget> ActivatableWidgetClass) {
    return NULL;
}

void UWindowManager::RemoveWidgetFromLayer(TEnumAsByte<EUWEWindowManagerLayer> LayerId, UCommonActivatableWidget* Widget) {
}

void UWindowManager::RemoveChildFromLayer(TEnumAsByte<EUWEWindowManagerLayer> LayerId, FName Name) {
}

void UWindowManager::RegisterLayer(TEnumAsByte<EUWEWindowManagerLayer> LayerId, UUWEWidgetLayer* InLayer) {
}

UModalActivatableWidget* UWindowManager::PushToLayerWithContext(TEnumAsByte<EUWEWindowManagerLayer> LayerId, TSubclassOf<UModalActivatableWidget> ActivatableWidgetClass, UObject* Context) {
    return NULL;
}

UCommonActivatableWidget* UWindowManager::PushToLayer(TEnumAsByte<EUWEWindowManagerLayer> LayerId, TSubclassOf<UCommonActivatableWidget> ActivatableWidgetClass) {
    return NULL;
}

void UWindowManager::PopFromLayer(TEnumAsByte<EUWEWindowManagerLayer> LayerId) {
}

void UWindowManager::Pop(UCommonActivatableWidget* Widget) {
}

void UWindowManager::OnWidgetRemoved(UWidget* Widget) {
}

bool UWindowManager::IsHidden() const {
    return false;
}

void UWindowManager::Init(TSubclassOf<UUserWidget> InMainScreenClass) {
}

void UWindowManager::Hide() {
}

bool UWindowManager::HasWidgetOnLayer(TEnumAsByte<EUWEWindowManagerLayer> LayerId) {
    return false;
}

void UWindowManager::HandleAppActivationChanged(bool bIsActive) {
}

UCommonActivatableWidget* UWindowManager::GetActiveWidget(TEnumAsByte<EUWEWindowManagerLayer> LayerId) {
    return NULL;
}

void UWindowManager::EmptyLayer(TEnumAsByte<EUWEWindowManagerLayer> LayerId) {
}

void UWindowManager::BroadcastEnhancedInputAction(UInputAction* InputAction) {
}

UCommonUserWidget* UWindowManager::AddChildToLayer(TEnumAsByte<EUWEWindowManagerLayer> LayerId, TSubclassOf<UCommonUserWidget> WidgetClass, FName Name) {
    return NULL;
}


