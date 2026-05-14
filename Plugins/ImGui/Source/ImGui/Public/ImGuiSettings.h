#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "EImGuiFont.h"
#include "ImGuiCanvasSizeInfo.h"
#include "ImGuiDPIScaleInfo.h"
#include "ImGuiKeyInfo.h"
#include "ImGuiSettings.generated.h"

UCLASS(DefaultConfig, Config=ImGui)
class UImGuiSettings : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath ImGuiInputHandlerClass;
    
    UPROPERTY(Config, EditAnywhere)
    bool bShareKeyboardInput;
    
    UPROPERTY(Config, EditAnywhere)
    bool bShareGamepadInput;
    
    UPROPERTY(Config, EditAnywhere)
    bool bShareMouseInput;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    bool bUseSoftwareCursor;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    int32 InputProcessorPriority;
    
    UPROPERTY(Config, EditAnywhere)
    FImGuiKeyInfo ToggleInput;
    
    UPROPERTY(Config, EditAnywhere)
    FImGuiCanvasSizeInfo CanvasSize;
    
    UPROPERTY(Config, EditAnywhere)
    FImGuiDPIScaleInfo DPIScale;
    
    UPROPERTY(Config, EditAnywhere)
    EImGuiFont ImGuiFont;
    
public:
    UImGuiSettings();

};

