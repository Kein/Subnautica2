#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "AbilitySystemTagChangeAnalyticsOption.h"
#include "UWEAbilitySystemTagChangeAnalytics.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEABILITYSYSTEM_API UUWEAbilitySystemTagChangeAnalytics : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TMap<FGameplayTag, FAbilitySystemTagChangeAnalyticsOption> TagsToTrack;
    
public:
    UUWEAbilitySystemTagChangeAnalytics(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void UpdateTagChanged(FGameplayTag GameplayTag, int32 TagCount);
    
};

