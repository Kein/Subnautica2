#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UWEBaseEditAction.h"
#include "UWERemoveCellsEditAction.generated.h"

class AUWESculpturalBaseActor;
class UUWERemoveCellsEditAction;

UCLASS(BlueprintType)
class UWESCULPTURALBASE_API UUWERemoveCellsEditAction : public UObject, public IUWEBaseEditAction {
    GENERATED_BODY()
public:
    UUWERemoveCellsEditAction();

    UFUNCTION(BlueprintCallable)
    static UUWERemoveCellsEditAction* Create(AUWESculpturalBaseActor* base, const FString& AnalyticsActionName);
    

    // Fix for true pure virtual functions not being implemented
};

