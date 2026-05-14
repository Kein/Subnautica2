#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectTypes.h"
#include "GameplayTagContainer.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "UWEReplicatedCueData.generated.h"

USTRUCT()
struct FUWEReplicatedCueData : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGameplayTag Tag;
    
    UPROPERTY()
    FGameplayCueParameters Parameters;
    
    UPROPERTY()
    uint64 Key;
    
    UPROPERTY()
    bool bIsActive;
    
    UWEGAMEPLAYCUES_API FUWEReplicatedCueData();
};

