#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UWEGameCaptureSettings.generated.h"

class UInputAction;

UCLASS(DefaultConfig, Config=UWEGameCapture)
class UWEGAMECAPTURE_API UUWEGameCaptureSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FSoftObjectPath GameCaptureInputMappingContext;
    
    UPROPERTY(Config, EditAnywhere)
    int32 GameCaptureInputMappingContextPriority;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftObjectPath FreeCamInputMappingContext;
    
    UPROPERTY(Config, EditAnywhere)
    int32 FreeCamInputPriority;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> CycleAction;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> TiltAction;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> RotateAction;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> MoveAction;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> MoveVerticalAction;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> CameraStateInputAction;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> GoToCameraStateInputAction;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> DeleteCameraStateInputAction;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> DoFDistanceInputAction;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> ApertureInputAction;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> FoVInputAction;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> AttachFreeCamInputAction;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> ClearFreeCamAttachmentInputAction;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UInputAction> SettingsHotKeyAction;
    
    UUWEGameCaptureSettings();

};

