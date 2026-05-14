#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UWEPlacementVolumeData.generated.h"

USTRUCT(BlueprintType)
struct FUWEPlacementVolumeData {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    FTransform Transform;
    
    UPROPERTY(SaveGame)
    int32 ObjectsBlockedBy;
    
    UPROPERTY(SaveGame)
    bool bUseForSamplePoints;
    
    SUBNAUTICA2_API FUWEPlacementVolumeData();
};

