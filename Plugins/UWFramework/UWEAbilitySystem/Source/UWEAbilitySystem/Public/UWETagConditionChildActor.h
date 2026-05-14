#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UWEChildActor.h"
#include "UWETagConditionChildActor.generated.h"

UCLASS()
class UWEABILITYSYSTEM_API AUWETagConditionChildActor : public AUWEChildActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTagConditionMet, bool, bInTagConditionsMet);
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTagContainer RequiredTags;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTagContainer BlockingTags;
    
    UPROPERTY(BlueprintAssignable)
    FOnTagConditionMet OnTagConditionMet;
    
public:
    AUWETagConditionChildActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintPure)
    bool GetTagConditionsMet() const;
    
};

