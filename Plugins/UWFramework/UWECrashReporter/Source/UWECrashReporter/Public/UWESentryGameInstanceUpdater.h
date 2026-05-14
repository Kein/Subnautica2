#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "UWESentryGameInstanceUpdater.generated.h"

UCLASS(Config=Game)
class UWECRASHREPORTER_API UUWESentryGameInstanceUpdater : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UUWESentryGameInstanceUpdater();

private:
    UFUNCTION()
    void OnSonarLoginCompleted(bool bLoggedIn);
    
};

