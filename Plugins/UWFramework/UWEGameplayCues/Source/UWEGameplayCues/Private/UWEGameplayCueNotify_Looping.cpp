#include "UWEGameplayCueNotify_Looping.h"
#include "Components/SceneComponent.h"

AUWEGameplayCueNotify_Looping::AUWEGameplayCueNotify_Looping(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->bAutoDestroyOnRemove = true;
    this->bAllowMultipleWhileActiveEvents = false;
}






