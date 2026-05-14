#pragma once
#include "CoreMinimal.h"
#include "UWENetModeTrackingWorldSubsystem.h"
#include "UWEServerWorldSubsystem.generated.h"

UCLASS(Abstract)
class UWEUTILITIES_API UUWEServerWorldSubsystem : public UUWENetModeTrackingWorldSubsystem {
    GENERATED_BODY()
public:
    UUWEServerWorldSubsystem();

};

