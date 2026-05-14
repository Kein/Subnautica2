#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EVolumeType.h"
#include "VolumeQueryResult.generated.h"

USTRUCT(BlueprintType)
struct UWEVOLUMETRACKER_API FVolumeQueryResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EVolumeType OuterVolumeType;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EVolumeType CurrentVolumeType;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FGameplayTagContainer CurrentTags;
    
    FVolumeQueryResult();
};

