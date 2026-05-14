#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Types/SlateEnums.h"
#include "UWENavigationInputSubsystem.generated.h"

UCLASS(BlueprintType)
class UWECOMMONUI_API UUWENavigationInputSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UUWENavigationInputSubsystem();

    UFUNCTION(BlueprintPure)
    EUINavigation GetLastNavigationDirection() const;
    
};

