#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "EUWEEditActionLegality.h"
#include "UWEBaseEditAction.h"
#include "UWEAddCellsEditAction.generated.h"

class AUWESculpturalBaseActor;
class UUWEAddCellsEditAction;

UCLASS(BlueprintType)
class UWESCULPTURALBASE_API UUWEAddCellsEditAction : public UObject, public IUWEBaseEditAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    FGameplayTag BrushType;
    
public:
    UUWEAddCellsEditAction();

    UFUNCTION(BlueprintCallable)
    EUWEEditActionLegality GetLegality(bool IgnoreSupportCheck, int32 LockGroupToIgnore, bool IgnoreAllLocks, int32 MaxIterations);
    
    UFUNCTION(BlueprintCallable)
    static UUWEAddCellsEditAction* Create(AUWESculpturalBaseActor* base, FGameplayTag NewBrushType, const FString& AnalyticsActionName);
    

    // Fix for true pure virtual functions not being implemented
};

