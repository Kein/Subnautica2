#pragma once
#include "CoreMinimal.h"
#include "AudioMixerBlueprintLibrary.h"
#include "AudioDeviceNotificationSubsystem.h"
#include "AudioMixerBlueprintLibrary.h"
#include "GameSettingValueDiscreteDynamic.h"
#include "SN2SettingValueDiscreteDynamic_AudioOutputDevice.generated.h"

UCLASS()
class SUBNAUTICA2_API USN2SettingValueDiscreteDynamic_AudioOutputDevice : public UGameSettingValueDiscreteDynamic {
    GENERATED_BODY()
public:
    USN2SettingValueDiscreteDynamic_AudioOutputDevice();

    UFUNCTION()
    void OnCompletedDeviceSwap(const FSwapAudioOutputResult& SwapResult);
    
    UFUNCTION()
    void OnAudioOutputDevicesObtained(const TArray<FAudioOutputDeviceInfo>& AvailableDevices);
    
    UFUNCTION()
    void DeviceAddedOrRemoved(const FString& DeviceID);
    
    UFUNCTION()
    void DefaultDeviceChanged(EAudioDeviceChangedRole InRole, const FString& DeviceID);
    
};

