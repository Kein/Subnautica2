#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "ActiveDynamicForceFeedback.h"
#include "UWEGameplayPlayerController.generated.h"

class ACharacter;

UCLASS()
class UWEGAMEPLAY_API AUWEGameplayPlayerController : public APlayerController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float XSX_LeftLargeMotorMultiplier;
    
    UPROPERTY(EditDefaultsOnly)
    float XSX_LeftSmallMotorMultiplier;
    
    UPROPERTY(EditDefaultsOnly)
    float XSX_RightLargeMotorMultiplier;
    
    UPROPERTY(EditDefaultsOnly)
    float XSX_RightSmallMotorMultiplier;
    
    UPROPERTY(BlueprintReadOnly)
    double TimeSinceLastActionTriggered;
    
private:
    UPROPERTY()
    TArray<FActiveDynamicForceFeedback> DynamicForceFeedbackEffects;
    
public:
    AUWEGameplayPlayerController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetForceFeedbackMultiplier(float Multiplier);
    
    UFUNCTION(BlueprintPure)
    ACharacter* GetPlayerCharacter() const;
    
};

