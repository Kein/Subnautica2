#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UWEWorldPopRuleFilter.h"
#include "UWEWorldPopRuleFilterVolumeTags.generated.h"

UCLASS(EditInlineNew)
class UWEWORLDPOPULATION2_API UUWEWorldPopRuleFilterVolumeTags : public UUWEWorldPopRuleFilter {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer RequiredTags;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer ExcludedTags;
    
    UPROPERTY(EditAnywhere)
    float Radius;
    
    UPROPERTY(EditAnywhere)
    bool IncludePCGVolumes;
    
    UUWEWorldPopRuleFilterVolumeTags();

};

