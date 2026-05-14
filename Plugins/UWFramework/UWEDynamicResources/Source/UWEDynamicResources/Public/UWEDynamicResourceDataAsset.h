#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UWEActorDataAsset.h"
#include "UWEHarvest.h"
#include "UWEDynamicResourceDataAsset.generated.h"

class AUWEBaseTool;

UCLASS(EditInlineNew)
class UWEDYNAMICRESOURCES_API UUWEDynamicResourceDataAsset : public UUWEActorDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText ResourceNodeName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FUWEHarvest> Harvests;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTagContainer SupportedInteracts;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<AUWEBaseTool> RequiredTool;
    
    UUWEDynamicResourceDataAsset();

};

