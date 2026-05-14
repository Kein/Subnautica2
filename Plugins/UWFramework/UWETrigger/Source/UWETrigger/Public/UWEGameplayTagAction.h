#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UWEPlayerTriggerAction.h"
#include "UWEGameplayTagAction.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWETRIGGER_API UUWEGameplayTagAction : public UUWEPlayerTriggerAction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer GrantTags;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer RemoveTags;
    
    UUWEGameplayTagAction(const FObjectInitializer& ObjectInitializer);

};

