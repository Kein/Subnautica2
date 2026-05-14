#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "UWESaveObject.h"
#include "FUWETriggerOverlapType.h"
#include "UWEPendingTriggerAction.h"
#include "UWEPlayerTriggerAction.generated.h"

class APlayerController;
class UUWESaveHandle;

UCLASS(Abstract, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWETRIGGER_API UUWEPlayerTriggerAction : public USceneComponent, public IUWESaveObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Delay;
    
    UPROPERTY(EditAnywhere)
    bool BypassConditionActions;
    
    UPROPERTY(EditAnywhere)
    FUWETriggerOverlapType ReactsTo;
    
private:
    UPROPERTY()
    UUWESaveHandle* SaveHandle;
    
    UPROPERTY(AdvancedDisplay, SaveGame, VisibleAnywhere)
    TArray<FUWEPendingTriggerAction> PendingActions;
    
public:
    UUWEPlayerTriggerAction(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void HandlePlayerJoined(APlayerController* PlayerController);
    

    // Fix for true pure virtual functions not being implemented
};

