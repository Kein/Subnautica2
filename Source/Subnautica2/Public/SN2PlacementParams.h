#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EBuilderSnapping.h"
#include "SN2SnappingSocket.h"
#include "SN2PlacementParams.generated.h"

class UUWEBaseModule;

USTRUCT(BlueprintType)
struct FSN2PlacementParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    int32 AllowedSurfaces;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    int32 AllowedZones;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    FGameplayTagContainer AllowedBrushTypes;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    FGameplayTagContainer AllowedSurfaceTags;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    bool OverrideCurrentSnapping;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    EBuilderSnapping SnappingOverride;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    bool OverrideLocationSnapSize;
    
private:
    UPROPERTY(EditAnywhere, SaveGame)
    float LocationSnapSize;
    
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    bool OverrideUserRotationIncrement;
    
private:
    UPROPERTY(EditAnywhere, SaveGame)
    float UserRotationIncrement;
    
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    TArray<FSN2SnappingSocket> SnappingSockets;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    TArray<UUWEBaseModule*> ProhibitedModules;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    int32 RotatesAtPlacementSurface;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    bool bUseSnappingRotation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    bool bOverrideInteractDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    bool bAllowUserRotationOnWall;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    float InteractDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HorizontalSurfaceThreshold;
    
    SUBNAUTICA2_API FSN2PlacementParams();
};

