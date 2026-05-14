#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "UWEBaseEditAction.h"
#include "UWEChangeVariantEditAction.generated.h"

class AUWESculpturalBaseActor;
class UUWEChangeVariantEditAction;

UCLASS(BlueprintType)
class UWESCULPTURALBASE_API UUWEChangeVariantEditAction : public UObject, public IUWEBaseEditAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite)
    FGameplayTag BrushType;
    
    UPROPERTY(BlueprintReadWrite)
    int32 IndexIncrement;
    
public:
    UUWEChangeVariantEditAction();

    UFUNCTION(BlueprintCallable)
    static UUWEChangeVariantEditAction* Create(AUWESculpturalBaseActor* base, FGameplayTag NewBrushType, int32 NewIndexIncrement, const FString& AnalyticsActionName);
    

    // Fix for true pure virtual functions not being implemented
};

