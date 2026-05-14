#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EUWEWindowManagerLayer.h"
#include "Templates/SubclassOf.h"
#include "UWEComputerTextInterfaceComponent.generated.h"

class AActor;
class UCommonActivatableWidget;
class UComputerTextInterfaceViewModel;
class UModalActivatableWidget;
class UUWEComputerTextInterfaceDialogueData;
class UUWEWaitDistanceExceeded;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWECOMPUTERTEXTINTERFACE_API UUWEComputerTextInterfaceComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText TerminalNameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText TerminalFirstLineText;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<UUWEComputerTextInterfaceDialogueData*> DefaultRootDialogueData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UUWEComputerTextInterfaceDialogueData*> ExtraRootDialogueData;
    
    UPROPERTY(BlueprintReadWrite, VisibleDefaultsOnly)
    TArray<UUWEComputerTextInterfaceDialogueData*> DialogueHistory;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UModalActivatableWidget> ComputerTextInterfaceWidgetClass;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<UUWEComputerTextInterfaceDialogueData*> MergedRootDialogueData;
    
    UPROPERTY()
    AActor* InteractingActor;
    
    UPROPERTY()
    UComputerTextInterfaceViewModel* ViewModel;
    
    UPROPERTY()
    UUWEComputerTextInterfaceDialogueData* RecentlyClickedDialogueData;
    
private:
    UPROPERTY(Instanced)
    UCommonActivatableWidget* Widget;
    
    UPROPERTY()
    UUWEWaitDistanceExceeded* DistanceTask;
    
public:
    UUWEComputerTextInterfaceComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveRootDialogueOption(UUWEComputerTextInterfaceDialogueData* DialogueData);
    
    UFUNCTION(BlueprintCallable)
    void OpenDialogueData(TArray<UUWEComputerTextInterfaceDialogueData*> DialogueDataToOpen);
    
private:
    UFUNCTION()
    void OnWidgetPopped(TEnumAsByte<EUWEWindowManagerLayer> LayerId, bool bIsLast, TSubclassOf<UCommonActivatableWidget> Class);
    
public:
    UFUNCTION(BlueprintNativeEvent)
    void OnDialogueClicked(UUWEComputerTextInterfaceDialogueData* DialogueData);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnBackClicked();
    
    UFUNCTION(BlueprintCallable)
    void InitializeComputerTextInterface(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void HandleDialogueClicked(UUWEComputerTextInterfaceDialogueData* ClickedDialogueData);
    
    UFUNCTION()
    void CloseUI();
    
    UFUNCTION(BlueprintCallable)
    void AddRootDialogueOption(UUWEComputerTextInterfaceDialogueData* DialogueData);
    
};

