#pragma once
#include "CoreMinimal.h"
#include "UWEPrimaryDataAssetBase.h"
#include "UWEMusicVolumeEntry.h"
#include "UUWEMusicVolumeData.generated.h"

UCLASS(Const)
class UWEMUSICVOLUMEMANAGER_API UUUWEMusicVolumeData : public UUWEPrimaryDataAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FUWEMusicVolumeEntry> MusicVolumeEntries;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MinSilenceBetweenPlays;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MaxSilenceBetweenPlays;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 PlaysBeforeRepeat;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool Loop;
    
    UUUWEMusicVolumeData();

};

