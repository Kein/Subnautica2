#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "UWESentryTagsUpdater.generated.h"

UCLASS(Config=Game)
class UWECRASHREPORTER_API UUWESentryTagsUpdater : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Config)
    float UpdateSeconds;
    
    UPROPERTY(Config)
    bool bDisabled;
    
public:
    UUWESentryTagsUpdater();

};

