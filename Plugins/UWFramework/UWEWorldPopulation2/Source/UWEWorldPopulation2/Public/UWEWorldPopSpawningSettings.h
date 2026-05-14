#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DeveloperSettings.h"
#include "EUWEWorldPopDirection.h"
#include "UWEWorldPopSpawningSettings.generated.h"

class UUWESeededCreatureDataAsset;

UCLASS(DefaultConfig, Config=UWEWorldPop)
class UWEWORLDPOPULATION2_API UUWEWorldPopSpawningSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    float LandscapeLayerWeightThreshold;
    
    UPROPERTY(Config, EditAnywhere)
    TMap<EUWEWorldPopDirection, FDoubleRange> AngleRange;
    
    UPROPERTY(Config, EditAnywhere)
    float MaximumBoundsForGathering;
    
    UPROPERTY(Config, EditAnywhere)
    int32 MaximumForSlowReduce;
    
    UPROPERTY(Config, EditAnywhere)
    int32 MaxSpawnPointsWithoutUserConfirmation;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UUWESeededCreatureDataAsset> SeededCreatureDataLocation;
    
    UPROPERTY(Config, EditAnywhere)
    FString RegionDADirectory;
    
    UPROPERTY(Config, EditAnywhere)
    FString RegionConfigDADirectory;
    
    UPROPERTY(Config, EditAnywhere)
    FString ResourceDADirectory;
    
    UPROPERTY(Config, EditAnywhere)
    FFilePath SeededDataPath;
    
    UUWEWorldPopSpawningSettings();

};

