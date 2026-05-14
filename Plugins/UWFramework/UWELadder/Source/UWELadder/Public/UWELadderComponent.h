#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "UWELadderComponent.generated.h"

class AActor;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWELADDER_API UUWELadderComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString ClimbUpText;
    
    UPROPERTY(EditAnywhere)
    FString ClimbDownText;
    
    UPROPERTY(EditAnywhere)
    bool bAllowClimbDown;
    
    UPROPERTY(EditAnywhere)
    bool bStepOver;
    
    UPROPERTY(EditAnywhere)
    float ClimbSpeed;
    
private:
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    TArray<TWeakObjectPtr<AActor>> ClimbingActors;
    
public:
    UUWELadderComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    bool IsActorInFront(const AActor* Actor) const;
    
    UFUNCTION(BlueprintPure)
    bool HasClimbingActors() const;
    
    UFUNCTION(BlueprintPure)
    bool CanClimpUp(const AActor* Actor) const;
    
    UFUNCTION(BlueprintPure)
    bool CanClimbFromLocation(const AActor* Actor) const;
    
};

