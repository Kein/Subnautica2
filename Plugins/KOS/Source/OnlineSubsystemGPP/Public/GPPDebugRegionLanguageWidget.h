#pragma once
#include "CoreMinimal.h"
#include "GPPBaseScreen.h"
#include "GPPDebugRegionLanguageWidget.generated.h"

class UTextBlock;

UCLASS(EditInlineNew)
class ONLINESUBSYSTEMGPP_API UGPPDebugRegionLanguageWidget : public UGPPBaseScreen {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UTextBlock* T_LanInfo_Via_UE;
    
    UPROPERTY(Instanced)
    UTextBlock* T_LanInfo_Via_OS;
    
    UPROPERTY(Instanced)
    UTextBlock* T_LanInfo_Via_UserAccount;
    
    UPROPERTY(Instanced)
    UTextBlock* T_LanInfo_Via_StorePlatformGameSetting;
    
    UPROPERTY(Instanced)
    UTextBlock* T_RegionInfo_Via_UE;
    
    UPROPERTY(Instanced)
    UTextBlock* T_RegionInfo_Via_OS;
    
    UPROPERTY(Instanced)
    UTextBlock* T_RegionInfo_Via_UserAccount;
    
    UPROPERTY(Instanced)
    UTextBlock* T_RegionInfo_Via_StorePlatformGameSetting;
    
    UGPPDebugRegionLanguageWidget();

};

