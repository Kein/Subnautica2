#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SN2BaseCharacterSaveData.generated.h"

USTRUCT(BlueprintType)
struct FSN2BaseCharacterSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    FTransform Transform;
    
    UPROPERTY(SaveGame)
    FRotator LookOrientation;
    
    SUBNAUTICA2_API FSN2BaseCharacterSaveData();
};

