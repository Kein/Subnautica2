#pragma once
#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "SN2AttributeBarViewModel.generated.h"

class AActor;
class USceneComponent;

UCLASS()
class SUBNAUTICA2_API USN2AttributeBarViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    float Value;
    
    UPROPERTY(BlueprintReadOnly)
    float MaxValue;
    
private:
    UPROPERTY(Export)
    TWeakObjectPtr<USceneComponent> SceneComponent;
    
public:
    USN2AttributeBarViewModel();

private:
    UFUNCTION()
    void OnOwnerDestroyed(AActor* DestroyedActor);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsVisible() const;
    
    UFUNCTION(BlueprintPure)
    float GetValuePercent() const;
    
    UFUNCTION(BlueprintPure)
    float GetDistance() const;
    
};

