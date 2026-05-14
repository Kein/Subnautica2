#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DeveloperSettings.h"
#include "Engine/EngineTypes.h"
#include "UWEWorldMarkupSettings.generated.h"

class UStaticMesh;

UCLASS(DefaultConfig, Config=UWEWorldMarkup)
class UWEWORLDPOPULATION2_API UUWEWorldMarkupSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    double CellSize;
    
    UPROPERTY(Config, EditAnywhere)
    int32 MaxOctreeLevel;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UStaticMesh> PlayableSpaceActorMesh;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UStaticMesh> WorldPopResourcePreviewMesh;
    
    UPROPERTY(Config, EditAnywhere)
    TEnumAsByte<ECollisionChannel> WorldPopulationTraceChannel;
    
    UPROPERTY(Config, EditAnywhere)
    FFilePath SpatialDataAssetPath;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath PCGActorClass;
    
    UUWEWorldMarkupSettings();

};

