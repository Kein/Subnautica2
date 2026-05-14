#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EVolumeType.h"
#include "TrackedVolumeData.generated.h"

USTRUCT(BlueprintType)
struct UWEVOLUMETRACKER_API FTrackedVolumeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EVolumeType VolumeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer TagsToAdd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer TagsToRemove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer VolumeTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer GASLooseTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag EnvironmentType;
    
    FTrackedVolumeData();
};

