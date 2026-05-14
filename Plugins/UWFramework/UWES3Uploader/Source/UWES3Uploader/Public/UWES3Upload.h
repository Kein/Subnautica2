#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "UWES3Upload.generated.h"

UCLASS(DefaultConfig, Config=Game)
class UWES3UPLOADER_API UUWES3Upload : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UUWES3Upload();

};

