#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UWEActorDataAsset.h"
#include "UWESurfaceSpawnData.generated.h"

UCLASS(EditInlineNew)
class UWEWORLDPOPULATION2_API UUWESurfaceSpawnData : public UUWEActorDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTagContainer TagsToApplyToSpawnPoints;
    
    UUWESurfaceSpawnData();

};

