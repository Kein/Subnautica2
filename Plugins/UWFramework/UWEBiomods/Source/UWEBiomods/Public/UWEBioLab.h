#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EUWEWindowManagerLayer.h"
#include "UWEGameplayActor.h"
#include "Interactable.h"
#include "ShowLockedBiomodsEventTrackerRequirement.h"
#include "Templates/SubclassOf.h"
#include "UWEBioLab.generated.h"

class UCommonActivatableWidget;
class UModalActivatableWidget;
class UUWEBioAbilityData;
class UUWEBiomodCrafterComponent;
class UUWEWaitDistanceExceeded;

UCLASS()
class UWEBIOMODS_API AUWEBioLab : public AUWEGameplayActor, public IInteractable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOnlyShowAvailableBioModsOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<UUWEBioAbilityData*, bool> AvailableBioModsOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FShowLockedBiomodsEventTrackerRequirement ShowLockedBiomodsEventTrackerRequirement;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWEBiomodCrafterComponent* BiomodCrafterComponent;
    
    UPROPERTY(EditDefaultsOnly)
    FString InteractionPrimaryTextString;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag InteractionTypeTag;
    
    UPROPERTY(EditDefaultsOnly)
    FString InteractionInUsePrimaryTextString;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag InteractionInUseTypeTag;
    
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UModalActivatableWidget> BioLabWidgetClass;
    
    UPROPERTY(Instanced)
    UCommonActivatableWidget* Widget;
    
    UPROPERTY()
    UUWEWaitDistanceExceeded* DistanceTask;
    
public:
    AUWEBioLab(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnWidgetPopped(TEnumAsByte<EUWEWindowManagerLayer> LayerId, bool bIsLast, TSubclassOf<UCommonActivatableWidget> Class);
    
    UFUNCTION()
    void CloseUI();
    

    // Fix for true pure virtual functions not being implemented
};

