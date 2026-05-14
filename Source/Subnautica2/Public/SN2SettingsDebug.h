#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SN2SettingsDebug.generated.h"

UCLASS(Config=DebugUserSettings)
class SUBNAUTICA2_API USN2SettingsDebug : public UObject {
    GENERATED_BODY()
public:
    USN2SettingsDebug();

    UFUNCTION()
    void SetAutoSaveEnabled(bool InValue);
    
    UFUNCTION()
    bool IsAutoSaveEnabled() const;
    
};

