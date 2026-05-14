#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ETextOverrideType.h"
#include "AbilityInfoData.generated.h"

USTRUCT(BlueprintType)
struct FAbilityInfoData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FString> PrimaryTextKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FString> SecondaryTextKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText TextInputOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ETextOverrideType TextOverrideType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ShowByToolbar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bHightlightTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString AbilityName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag InteractionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag CannotActivateCueTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCanActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAlwaysDisplayHint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool AllowShowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bForceShowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag CannotActivateReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bSuppressWhenNoInput;
    
    UWEINTERFACES_API FAbilityInfoData();
};

