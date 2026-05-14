#pragma once
#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "EUWEWindowManagerLayer.h"
#include "OnResetMainMenuDelegate.h"
#include "Templates/SubclassOf.h"
#include "UWEFrontendHUD.generated.h"

class UCommonActivatableWidget;
class UFocusActivatableWidget;
class ULoadingScreenManager;
class UModalActivatableWidget;
class UUWENotificationSystemViewModel;
class UUWEOnlineSessionSubsystem;
class UUWESonarSubsystem;
class UUWEUserSubsystem;
class UWindowManager;

UCLASS(NonTransient, Config=Engine)
class UWEFRONTEND_API AUWEFrontendHUD : public AHUD {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnResetMainMenu OnResetMainMenu;
    
private:
    UPROPERTY(Config, EditAnywhere)
    TSoftClassPtr<UFocusActivatableWidget> StartScreenWidgetAsset;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftClassPtr<UFocusActivatableWidget> MainMenuWidgetAsset;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftClassPtr<UFocusActivatableWidget> DebugMenuOverlayAsset;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftClassPtr<UModalActivatableWidget> ErrorPopupAsset;
    
    UPROPERTY(Instanced)
    UFocusActivatableWidget* CurrentFocusedWidget;
    
    UPROPERTY()
    UWindowManager* WindowManager;
    
    UPROPERTY()
    UUWEUserSubsystem* UserSubsystem;
    
    UPROPERTY()
    UUWESonarSubsystem* SonarSubsystem;
    
    UPROPERTY()
    UUWEOnlineSessionSubsystem* OnlineSessionSubsystem;
    
    UPROPERTY()
    ULoadingScreenManager* LoadingScreenManager;
    
    UPROPERTY()
    UUWENotificationSystemViewModel* NotificationsViewModel;
    
    UPROPERTY()
    TSubclassOf<UFocusActivatableWidget> StartScreenWidget;
    
    UPROPERTY()
    TSubclassOf<UFocusActivatableWidget> MainMenuWidget;
    
public:
    AUWEFrontendHUD(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnWidgetPopped(TEnumAsByte<EUWEWindowManagerLayer> LayerId, bool bIsLast, TSubclassOf<UCommonActivatableWidget> Class);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnExitedMultiplayerMenu();
    
    UFUNCTION(BlueprintCallable)
    void OnEnteredMultiplayerMenu();
    
};

