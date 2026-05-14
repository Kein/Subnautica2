#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UWEActorDataAsset.h"
#include "UWEGameplayTagsData.generated.h"

UCLASS(EditInlineNew)
class UWEABILITYSYSTEM_API UUWEGameplayTagsData : public UUWEActorDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTagContainer Tags;
    
    UUWEGameplayTagsData();

};

