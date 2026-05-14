#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettingsBackedByCVars.h"
#include "UWERepGraphActorClassSettings.h"
#include "UWEReplicationGraphSettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class UWENETWORKING_API UUWEReplicationGraphSettings : public UDeveloperSettingsBackedByCVars {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bEnableFastSharedPath;
    
    UPROPERTY(EditAnywhere)
    int32 DynamicActorFrequencyBuckets;
    
    UPROPERTY(EditAnywhere)
    float SpatialGridSize;
    
    UPROPERTY(EditAnywhere)
    float SpatialGridWorldSize;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FUWERepGraphActorClassSettings> ClassSettings;
    
    UUWEReplicationGraphSettings();

};

