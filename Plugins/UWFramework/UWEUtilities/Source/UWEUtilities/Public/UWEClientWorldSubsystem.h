#pragma once
#include "CoreMinimal.h"
#include "UWENetModeTrackingWorldSubsystem.h"
#include "UWEClientWorldSubsystem.generated.h"

UCLASS(Abstract)
class UWEUTILITIES_API UUWEClientWorldSubsystem : public UUWENetModeTrackingWorldSubsystem {
    GENERATED_BODY()
public:
    UUWEClientWorldSubsystem();

};

