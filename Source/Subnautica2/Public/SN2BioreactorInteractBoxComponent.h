#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "GameplayTagContainer.h"
#include "EUWEWindowManagerLayer.h"
#include "Interactable.h"
#include "Templates/SubclassOf.h"
#include "SN2BioreactorInteractBoxComponent.generated.h"

class UCommonActivatableWidget;
class UModalActivatableWidget;
class UUWEWaitDistanceExceeded;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2BioreactorInteractBoxComponent : public UBoxComponent, public IInteractable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString InteractionTextId;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag InteractionTag;
    
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UModalActivatableWidget> BioreactorWidgetClass;
    
    UPROPERTY(Instanced)
    UCommonActivatableWidget* Widget;
    
    UPROPERTY()
    UUWEWaitDistanceExceeded* DistanceTask;
    
public:
    USN2BioreactorInteractBoxComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnWidgetPopped(TEnumAsByte<EUWEWindowManagerLayer> LayerId, bool bIsLast, TSubclassOf<UCommonActivatableWidget> Class);
    
    UFUNCTION()
    void CloseUI();
    

    // Fix for true pure virtual functions not being implemented
};

