#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "UWEBaseEditAction.h"
#include "UWEModifyTypeEditAction.generated.h"

class AUWESculpturalBaseActor;
class UUWEModifyTypeEditAction;

UCLASS(BlueprintType)
class UWESCULPTURALBASE_API UUWEModifyTypeEditAction : public UObject, public IUWEBaseEditAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite)
    FGameplayTag BrushType;
    
public:
    UUWEModifyTypeEditAction();

    UFUNCTION(BlueprintCallable)
    static UUWEModifyTypeEditAction* Create(AUWESculpturalBaseActor* base, FGameplayTag NewBrushType, const FString& AnalyticsActionName, int32 VariantIndex);
    

    // Fix for true pure virtual functions not being implemented
};

