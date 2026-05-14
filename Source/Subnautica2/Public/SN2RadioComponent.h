#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RadioMessageAddedDelegate.h"
#include "RadioMessageRemovedDelegate.h"
#include "RadioMessagesAvailableChangedDelegate.h"
#include "SN2RadioComponent.generated.h"

class APlayerState;
class AUWEGameStateBase;
class UUWEComputerTextInterfaceDialogueData;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2RadioComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UUWEComputerTextInterfaceDialogueData*> RadioDataList;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TArray<UUWEComputerTextInterfaceDialogueData*> CurrentRadioMessages;
    
    UPROPERTY(BlueprintAssignable)
    FRadioMessageAdded OnRadioMessageAdded;
    
    UPROPERTY(BlueprintAssignable)
    FRadioMessageRemoved OnRadioMessageRemoved;
    
    UPROPERTY(BlueprintAssignable)
    FRadioMessagesAvailableChanged OnHasRadioMessagesChanged;
    
private:
    UPROPERTY()
    APlayerState* OwningPlayerState;
    
    UPROPERTY()
    AUWEGameStateBase* GameState;
    
public:
    USN2RadioComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    bool HasRadioMessages() const;
    
private:
    UFUNCTION()
    void CheckRadioDataList();
    
};

