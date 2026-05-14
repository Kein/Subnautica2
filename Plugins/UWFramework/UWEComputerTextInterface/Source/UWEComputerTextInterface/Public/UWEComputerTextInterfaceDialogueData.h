#pragma once
#include "CoreMinimal.h"
#include "UWEPrimaryDataAssetBase.h"
#include "ComputerTextInterfaceAudio.h"
#include "EUWEComputerTextInterfaceAfterDialogueAction.h"
#include "EUWEComputerTextInterfaceResponseEmotion.h"
#include "PlayerEventAsset.h"
#include "PlayerEventTag.h"
#include "UWEComputerTextInterfaceDialogueData.generated.h"

class UUWEComputerTextInterfaceDialogueData;
class UUWEStoryGoal;
class UUWEStoryGoalRule;

UCLASS()
class UWECOMPUTERTEXTINTERFACE_API UUWEComputerTextInterfaceDialogueData : public UUWEPrimaryDataAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText InputPrompt;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText InputText;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText ResponseText;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool IsGoldenPath;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 OrderingIndex;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UUWEStoryGoal* UnlocksWorldStoryGoal;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UUWEStoryGoal* UnlocksPlayerStoryGoal;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EUWEComputerTextInterfaceResponseEmotion ResponseEmotion;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FComputerTextInterfaceAudio Audio;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EUWEComputerTextInterfaceAfterDialogueAction AfterDialogueAction;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 GoBackNumberOfDialoguesCount;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float AfterDialogueActionDelay;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool GoBackAfterClick;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float GoBackAfterClickDelay;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<UUWEComputerTextInterfaceDialogueData*> DialogueDataToOpen;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    double DialogueDataToOpenDelay;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<UUWEStoryGoal*> RequiredStoryGoals;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWEStoryGoalRule* RequiredLogic;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<UUWEStoryGoal*> BlockingStoryGoals;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWEStoryGoalRule* BlockingLogic;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FPlayerEventAsset> RequiredPlayerEventsAsset;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FPlayerEventTag> RequiredPlayerEventsTag;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FPlayerEventAsset> BlockingPlayerEventsAsset;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FPlayerEventTag> BlockingPlayerEventsTag;
    
    UUWEComputerTextInterfaceDialogueData();

    UFUNCTION()
    bool ContainsGoldenPathInternal(TSet<UUWEComputerTextInterfaceDialogueData*>& VisitedDialogues);
    
    UFUNCTION(BlueprintPure)
    bool ContainsGoldenPath();
    
};

