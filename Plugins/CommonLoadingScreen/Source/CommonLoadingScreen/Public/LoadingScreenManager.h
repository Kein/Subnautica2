#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "LoadingScreenManager.generated.h"

UCLASS(BlueprintType)
class COMMONLOADINGSCREEN_API ULoadingScreenManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    ULoadingScreenManager();

    UFUNCTION(BlueprintPure)
    FString GetDebugReasonForShowingOrHidingLoadingScreen() const;
    
};

