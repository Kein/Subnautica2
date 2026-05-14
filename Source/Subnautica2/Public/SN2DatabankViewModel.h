#pragma once
#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "SN2DatabankViewModel.generated.h"

class AActor;
class UObject;
class USN2DatabankCategoryViewModel;
class USN2DatabankEntryViewModel;
class UUWEDatabankEntry;
class UUWEStoryGoal;
class UUWEStoryGoalContainerComponent;

UCLASS()
class SUBNAUTICA2_API USN2DatabankViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    TArray<USN2DatabankEntryViewModel*> Entries;
    
    UPROPERTY(BlueprintReadOnly)
    USN2DatabankCategoryViewModel* Root;
    
    UPROPERTY(Instanced)
    UUWEStoryGoalContainerComponent* StoryGoalContainer;
    
    UPROPERTY()
    TArray<UUWEDatabankEntry*> DatabankEntries;
    
    UPROPERTY()
    TMap<FString, USN2DatabankCategoryViewModel*> Categories;
    
public:
    USN2DatabankViewModel();

    UFUNCTION(BlueprintCallable)
    void Refresh();
    
protected:
    UFUNCTION()
    void OnStoryGoalUnlocked(UUWEStoryGoal* UnlockedStoryGoal, AActor* ReceivingActor);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    void Initialize(UObject* WorldContext);
    
};

