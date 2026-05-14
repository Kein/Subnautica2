#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "SN2AxumVisibilityComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2AxumVisibilityComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLayerToggled, bool, NewLayerVisibility);
    
    UPROPERTY(BlueprintAssignable)
    FOnLayerToggled OnLayerToggled;
    
private:
    UPROPERTY(EditAnywhere)
    bool HideActorOnLayerToggle;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag TagToWatch;
    
    UPROPERTY(EditAnywhere)
    bool IsLayerOn;
    
public:
    USN2AxumVisibilityComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnTagChanged(FGameplayTag GameplayTag, int32 I);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsOn() const;
    
};

