#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "GameplayTagContainer.h"
#include "EUWEWindowManagerLayer.h"
#include "Interactable.h"
#include "Templates/SubclassOf.h"
#include "SN2ProcessorStationRecipeSelection.generated.h"

class AController;
class APawn;
class UCommonActivatableWidget;
class UModalActivatableWidget;
class UUWEWaitDistanceExceeded;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2ProcessorStationRecipeSelection : public UBoxComponent, public IInteractable {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnInteractionStart, AController*, Controller, APawn*, Pawn);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnInteractionEnd, AController*, Controller, APawn*, Pawn);
    
    UPROPERTY(BlueprintAssignable)
    FOnInteractionStart OnInteractionStart;
    
    UPROPERTY(BlueprintAssignable)
    FOnInteractionEnd OnInteractionEnd;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString InteractionTextId;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag InteractionTag;
    
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UModalActivatableWidget> ProcessorWidgetClass;
    
    UPROPERTY(Instanced)
    UCommonActivatableWidget* Widget;
    
    UPROPERTY()
    UUWEWaitDistanceExceeded* DistanceTask;
    
public:
    USN2ProcessorStationRecipeSelection(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnWidgetPopped(TEnumAsByte<EUWEWindowManagerLayer> LayerId, bool bIsLast, TSubclassOf<UCommonActivatableWidget> Class);
    
    UFUNCTION()
    void CloseUI();
    

    // Fix for true pure virtual functions not being implemented
};

