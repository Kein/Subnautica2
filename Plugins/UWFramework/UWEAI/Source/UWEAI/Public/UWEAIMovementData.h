#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "UWEShapeTransformed.h"
#include "EVolumeType.h"
#include "UWEAIMovementCache.h"
#include "UWEAIMovementData.generated.h"

class UUWEAIMovementBaseSettings;
class UUWEAIMovementComponentSettings;

USTRUCT(BlueprintType)
struct FUWEAIMovementData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTagContainer HabitationAreas;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag DefaultHabitationAreaTag;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float HabitationVolumesDiscoveryRadius;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool AllowEmptyHabitationAreas;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FUWEShapeTransformed PersonalHabitationVolume;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EVolumeType PersonalHabitationStayInVolumeType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UUWEAIMovementBaseSettings* BaseSettings;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<FGameplayTag, UUWEAIMovementComponentSettings*> MovementStyles;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FUWEAIMovementCache Cache;
    
    UWEAI_API FUWEAIMovementData();
};

