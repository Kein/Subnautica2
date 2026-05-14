#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MVVMViewModelBase.h"
#include "SN2HoverTargetViewModel.generated.h"

class AActor;
class AUWEBaseItem;
class UInputAction;
class UObject;
class UPrimitiveComponent;
class UUWEGameplayAbility;

UCLASS(Config=Game)
class SUBNAUTICA2_API USN2HoverTargetViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    AActor* HoveredActor;
    
    UPROPERTY(BlueprintReadOnly)
    float HoveredActorDistance;
    
    UPROPERTY(BlueprintReadOnly, Export)
    TWeakObjectPtr<UPrimitiveComponent> HoveredComponent;
    
    UPROPERTY(BlueprintReadOnly)
    FText HoveredActorName;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayTag InteractionType;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsInventoryFull;
    
    UPROPERTY(BlueprintReadOnly)
    bool HoveredTargetInRangeForPrompt;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FString> PrimaryTexts;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FString> SecondaryTexts;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FGameplayTag> CannotActivateReasons;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FString> ToolbarTexts;
    
    UPROPERTY(BlueprintReadOnly)
    AUWEBaseItem* EquippedTool;
    
    UPROPERTY(BlueprintReadWrite)
    bool ShouldBeVisible;
    
    UPROPERTY(BlueprintReadWrite)
    bool ShouldReticleBeVisible;
    
    UPROPERTY(BlueprintReadOnly, Config)
    float MaxValidHoverPromptDistance;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsConstructionProgressVisible;
    
private:
    UPROPERTY()
    UObject* WorldContextObject;
    
    UPROPERTY()
    TArray<UUWEGameplayAbility*> AllAbilities;
    
    UPROPERTY()
    TArray<UInputAction*> PrimaryInputActions;
    
public:
    USN2HoverTargetViewModel();

};

