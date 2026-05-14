#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "UWEPlayerAdaptation.h"
#include "SN2AdaptationsPlayerStateComponent.generated.h"

class APawn;
class APlayerState;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2AdaptationsPlayerStateComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAdaptationsInitialized);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAdaptationRemoved, const FUWEPlayerAdaptation&, Adaptation);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAdaptationInstalled, const FUWEPlayerAdaptation&, Adaptation);
    
    UPROPERTY(BlueprintAssignable)
    FOnAdaptationInstalled OnAdaptationInstalled;
    
    UPROPERTY(BlueprintAssignable)
    FOnAdaptationRemoved OnAdaptationRemoved;
    
    UPROPERTY(BlueprintAssignable)
    FOnAdaptationsInitialized OnAdaptationsInitialized;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FUWEPlayerAdaptation> Adaptations;
    
public:
    USN2AdaptationsPlayerStateComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetAdaptationEnabled(FUWEPlayerAdaptation Adaptation, bool bEnabled);
    
protected:
    UFUNCTION()
    void OnPawnSet(APlayerState* Player, APawn* NewPawn, APawn* OldPawn);
    
public:
    UFUNCTION(BlueprintCallable)
    bool HasAdaptation(FUWEPlayerAdaptation Adaptation);
    
    UFUNCTION(BlueprintCallable)
    TArray<FUWEPlayerAdaptation> GetAdaptations();
    
protected:
    UFUNCTION()
    void AdaptationUnlockChanged(FGameplayTag GameplayTag, int32 NewCount);
    
};

