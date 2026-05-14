#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UWEActorDataAsset.h"
#include "ResourceContent.h"
#include "UWEAIRamData.generated.h"

UCLASS(EditInlineNew)
class UWEAI_API UUWEAIRamData : public UUWEActorDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag TargetCueTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FResourceContent> Content;
    
    UUWEAIRamData();

};

