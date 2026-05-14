#include "UWEFrontendHUD.h"
#include "UWENotificationSystemViewModel.h"
#include "Templates/SubclassOf.h"

AUWEFrontendHUD::AUWEFrontendHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebugDisplay.AddDefaulted(1);
    this->CurrentFocusedWidget = NULL;
    this->WindowManager = NULL;
    this->UserSubsystem = NULL;
    this->SonarSubsystem = NULL;
    this->OnlineSessionSubsystem = NULL;
    this->LoadingScreenManager = NULL;
    this->NotificationsViewModel = CreateDefaultSubobject<UUWENotificationSystemViewModel>(TEXT("NotificationsViewModel"));
    this->StartScreenWidget = NULL;
    this->MainMenuWidget = NULL;
}

void AUWEFrontendHUD::OnWidgetPopped(TEnumAsByte<EUWEWindowManagerLayer> LayerId, bool bIsLast, TSubclassOf<UCommonActivatableWidget> Class) {
}

void AUWEFrontendHUD::OnExitedMultiplayerMenu() {
}

void AUWEFrontendHUD::OnEnteredMultiplayerMenu() {
}


