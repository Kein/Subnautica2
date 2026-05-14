#include "UWEBioLab.h"
#include "Templates/SubclassOf.h"
#include "UWEBiomodCrafterComponent.h"

AUWEBioLab::AUWEBioLab(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bOnlyShowAvailableBioModsOverride = false;
    this->BiomodCrafterComponent = CreateDefaultSubobject<UUWEBiomodCrafterComponent>(TEXT("Crafter"));
    this->BioLabWidgetClass = NULL;
    this->Widget = NULL;
    this->DistanceTask = NULL;
}

void AUWEBioLab::OnWidgetPopped(TEnumAsByte<EUWEWindowManagerLayer> LayerId, bool bIsLast, TSubclassOf<UCommonActivatableWidget> Class) {
}

void AUWEBioLab::CloseUI() {
}


