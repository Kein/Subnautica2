#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "UWEHabitationVolumeManager.generated.h"

class AUWEHabitationVolume;

UCLASS()
class UWEAI_API UUWEHabitationVolumeManager : public UWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<AUWEHabitationVolume*> Volumes;
    
public:
    UUWEHabitationVolumeManager();

};

