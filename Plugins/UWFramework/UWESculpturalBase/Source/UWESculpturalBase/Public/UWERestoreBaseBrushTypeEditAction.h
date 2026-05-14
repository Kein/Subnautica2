#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "UWEBaseEditAction.h"
#include "UWERestoreBaseBrushTypeEditAction.generated.h"

class AUWESculpturalBaseActor;
class UUWERestoreBaseBrushTypeEditAction;

UCLASS(BlueprintType)
class UWESCULPTURALBASE_API UUWERestoreBaseBrushTypeEditAction : public UObject, public IUWEBaseEditAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    FGameplayTag BrushType;
    
public:
    UUWERestoreBaseBrushTypeEditAction();

    UFUNCTION(BlueprintCallable)
    static UUWERestoreBaseBrushTypeEditAction* Create(AUWESculpturalBaseActor* base, FGameplayTag NewBrushType, const FString& AnalyticsActionName);
    

    // Fix for true pure virtual functions not being implemented
};

