#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayEffectTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "UWELoopingCueArray.h"
#include "UWELoopingCuesComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEGAMEPLAYCUES_API UUWELoopingCuesComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Replicated)
    FUWELoopingCueArray CueData;
    
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    FGameplayTagContainer ActiveCues;
    
public:
    UUWELoopingCuesComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void RemoveCue(FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAnyCue(FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable)
    void AddCueNoParams(FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable)
    void AddCue(FGameplayTag Tag, const FGameplayCueParameters& Parameters);
    
};

