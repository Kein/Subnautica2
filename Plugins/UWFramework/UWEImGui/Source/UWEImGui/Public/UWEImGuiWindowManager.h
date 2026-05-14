#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "UWEImGuiWindowManager.generated.h"

UCLASS(Config=GameUserSettings)
class UWEIMGUI_API UUWEImGuiWindowManager : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Config)
    TArray<FString> DiagnosticWindows;
    
public:
    UUWEImGuiWindowManager();

    virtual TStatId GetStatId() const override { RETURN_QUICK_DECLARE_CYCLE_STAT(UUWEImGuiWindowManager, STATGROUP_Tickables); }
};

