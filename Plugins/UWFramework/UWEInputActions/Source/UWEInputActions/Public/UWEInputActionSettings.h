#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UWEInputActionSettings.generated.h"

class UInputAction;

UCLASS(DefaultConfig, Config=UWEInputActions)
class UWEINPUTACTIONS_API UUWEInputActionSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> InteractAction;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> PickupAction;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> DetachAction;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> MoveAction;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> AscendAction;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> DiveElevatorAscend;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> DiveElevatorDescend;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> JumpAction;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> LookAction;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> SprintAction;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> ConfirmAction;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> CancelAction;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> ActivateToolPrimaryAction;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> ActivateToolSecondaryAction;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> ActivateToolTertiaryAction;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> ActivateToolGenericBoolAction;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> ActivateToolGenericScalarAction;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> ReloadToolAction;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> ActivateToolGenericBoolSecondaryAction;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> NextToolAction;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> PrevToolAction;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> InventoryAction;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> DatabankAction;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> ThirdPersonAction;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> AttachCameraAction;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> ReviveAction;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> ModiferKeyAction;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> QuickSlot1Action;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> QuickSlot2Action;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> QuickSlot3Action;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> QuickSlot4Action;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> QuickSlot5Action;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> QuickSlot6Action;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> QuickSlot7Action;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> QuickSlot8Action;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> QuickSlot9Action;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> QuickSlot10Action;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> QuickSlotAction;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> InventoryActionPrimary;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> InventoryActionSecondary;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> NavigateAction;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> HolsterAction;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> CallForHelpAction;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> InteractAlternateAction;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> ResetSettingsAction;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> PingAction;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> HoldPingAction;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> DoublePingAction;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> StopPilotAction;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> DetachChassisAction;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> CloseAction;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> ButtonPressAction;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> ButtonAltPressAction;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> NoaSkipAction;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> NoaSelectAction;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> KeybindingsClearInput;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> KeybindingsResetInputAction;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> OpenConsoleAction;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> CameraDistanceCloser;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> CameraDistanceFarther;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> SetLabelAction;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> DrumTuneUp;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> DrumTuneDown;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> DrumA;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> DrumRimA;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> DrumB;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> DrumRimB;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> SkipAction;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> EjectAction;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> ViewProfileAction;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> UIAltSubmitAction;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> UISubmitAction;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> UIScrollAction;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> UseBuilderAction;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> OpenBuilderMenuAction;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> SelectNextCameraAction;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> DropItemAction;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> ActivateBioAbilityAction;
    
    UUWEInputActionSettings();

};

