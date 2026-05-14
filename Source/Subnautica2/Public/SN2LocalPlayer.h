#pragma once
#include "CoreMinimal.h"
#include "Engine/LocalPlayer.h"
#include "UWESettingsInterface.h"
#include "SN2LocalPlayer.generated.h"

class USN2SettingsDebug;
class USN2SettingsLocal;
class USN2SettingsShared;

UCLASS(NonTransient)
class SUBNAUTICA2_API USN2LocalPlayer : public ULocalPlayer, public IUWESettingsInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    USN2SettingsShared* SharedSettings;
    
    UPROPERTY()
    USN2SettingsDebug* DebugSettings;
    
public:
    USN2LocalPlayer();

    UFUNCTION()
    USN2SettingsShared* GetSharedSettings() const;
    
    UFUNCTION()
    USN2SettingsLocal* GetLocalSettings() const;
    
    UFUNCTION()
    USN2SettingsDebug* GetDebugSettings() const;
    

    // Fix for true pure virtual functions not being implemented
};

