#pragma once
#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "SN2DialogueViewModel.generated.h"

class AActor;
class UObject;
class USN2DialogueEntryViewModel;
class USN2DialogueViewModel;
class UUWEStoryGoal;
class UUWEStoryGoalContainerComponent;

UCLASS()
class USN2DialogueViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UUWEStoryGoalContainerComponent* StoryGoalContainer;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<USN2DialogueEntryViewModel*> Entries;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<USN2DialogueEntryViewModel*> PendingEntries;
    
public:
    USN2DialogueViewModel();

    UFUNCTION(BlueprintCallable)
    void UnlockAllDialogueLogs(AActor* ReceivingActor);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContext"))
    static USN2DialogueViewModel* TryGetDialogueViewModel(UObject* WorldContext);
    
protected:
    UFUNCTION()
    void Refresh();
    
    UFUNCTION()
    void OnStoryGoalUnlocked(UUWEStoryGoal* UnlockedStoryGoal, AActor* ReceivingActor);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    void Initialize(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    void ClearPendingEntries();
    
};

