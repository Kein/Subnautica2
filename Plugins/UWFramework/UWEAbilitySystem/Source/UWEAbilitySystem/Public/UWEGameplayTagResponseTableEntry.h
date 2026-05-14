#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "UWEGameplayCueEntry.h"
#include "UWEGameplayTagResponseTableEntry.generated.h"

class UGameplayEffect;

USTRUCT(BlueprintType)
struct FUWEGameplayTagResponseTableEntry {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTag Tag;
    
    UPROPERTY(EditAnywhere)
    TArray<FUWEGameplayCueEntry> OnTagAddedCues;
    
    UPROPERTY(EditAnywhere)
    TArray<FUWEGameplayCueEntry> OnTagRemovedCues;
    
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<UGameplayEffect>> OnTagAddedEffects;
    
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<UGameplayEffect>> OnTagRemovedEffects;
    
    UWEABILITYSYSTEM_API FUWEGameplayTagResponseTableEntry();
};

