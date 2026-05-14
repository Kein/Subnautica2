#pragma once
#include "CoreMinimal.h"
#include "Subsystems/LocalPlayerSubsystem.h"
#include "UWESteamDeckRuntimeSubsystem.generated.h"

UCLASS()
class UWESTEAMDECKRUNTIME_API UUWESteamDeckRuntimeSubsystem : public ULocalPlayerSubsystem {
    GENERATED_BODY()
public:
    UUWESteamDeckRuntimeSubsystem();

};

