#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "UWEVolumeTrackerSettings.generated.h"

UCLASS(BlueprintType, DefaultConfig, Config=Game)
class UWEVOLUMETRACKER_API UUWEVolumeTrackerSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    FName CollisionProfile;
    
    UUWEVolumeTrackerSettings();

};

