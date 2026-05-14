#pragma once
#include "CoreMinimal.h"
#include "LevelSequenceActor.h"
#include "UWESaveCallbacks.h"
#include "UWESerializedLevelSequenceActor.generated.h"

class UUWESaveComponent;

UCLASS()
class UWESEQUENCE_API AUWESerializedLevelSequenceActor : public AReplicatedLevelSequenceActor, public IUWESaveCallbacks {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UUWESaveComponent* SaveComponent;
    
    UPROPERTY(SaveGame)
    double PlaybackTime;
    
public:
    AUWESerializedLevelSequenceActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void OnSequencePlay();
    
    UFUNCTION()
    void OnSequenceFinished();
    
    UFUNCTION()
    void OnLocalClientReady();
    

    // Fix for true pure virtual functions not being implemented
};

