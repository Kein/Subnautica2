#pragma once
#include "CoreMinimal.h"
#include "GameplayCueNotifyTypes.h"
#include "GameplayCueNotifyTypes.h"
#include "GameplayTagContainer.h"
#include "Chaos/ChaosEngineInterface.h"
#include "EUWEGameplayCueTagQueryCheck_Target.h"
#include "UWEGameplayCueNotify_SpawnCondition.generated.h"

USTRUCT(BlueprintType)
struct FUWEGameplayCueNotify_SpawnCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EGameplayCueNotify_LocallyControlledSource LocallyControlledSource;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EGameplayCueNotify_LocallyControlledPolicy LocallyControlledPolicy;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ChanceToPlay;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<TEnumAsByte<EPhysicalSurface>> AllowedSurfaceTypes;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<TEnumAsByte<EPhysicalSurface>> RejectedSurfaceTypes;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EUWEGameplayCueTagQueryCheck_Target TargetToCheckTags;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTagQuery TagQuery;
    
    UWEGAMEPLAYCUES_API FUWEGameplayCueNotify_SpawnCondition();
};

