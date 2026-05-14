#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EUWEInputPromptTargetNameSource.h"
#include "UWEAbilityInputPrompt.generated.h"

class UUWEAbilityCondition;

USTRUCT(BlueprintType)
struct FUWEAbilityInputPrompt {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FString PrimaryKey;
    
    UPROPERTY(EditDefaultsOnly)
    FString SecondaryKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText TextInputOverride;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag IconType;
    
    UPROPERTY(EditDefaultsOnly)
    EUWEInputPromptTargetNameSource TargetNameSource;
    
    UPROPERTY(EditDefaultsOnly)
    bool bShowAtToolbar;
    
    UPROPERTY(EditDefaultsOnly)
    bool bHideActorName;
    
    UPROPERTY(EditDefaultsOnly)
    bool bHightlightTarget;
    
    UPROPERTY(EditDefaultsOnly)
    int32 PromptPriority;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    TArray<UUWEAbilityCondition*> Conditions;
    
    UWEABILITYSYSTEM_API FUWEAbilityInputPrompt();
};

