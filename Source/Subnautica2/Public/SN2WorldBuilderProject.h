#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "ESN2WorldBuilderProjectState.h"
#include "SN2WorldBuilderProject.generated.h"

class USN2BuilderConstructActionData;
class UStaticMeshComponent;
class UUWESaveComponent;
class UUWEStoryGoal;

UCLASS()
class SUBNAUTICA2_API ASN2WorldBuilderProject : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    USN2BuilderConstructActionData* ConstructActionData;
    
protected:
    UPROPERTY(EditAnywhere)
    bool bHideBrokenMeshDuringGhost;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UStaticMeshComponent* BrokenMesh;
    
    UPROPERTY(Instanced)
    UUWESaveComponent* SaveComponent;
    
    UPROPERTY(EditAnywhere)
    UUWEStoryGoal* RequiredStorygoalForGhost;
    
    UPROPERTY(EditAnywhere)
    TArray<UUWEStoryGoal*> WorldStoryGoalsToUnlockOnGhostStarted;
    
    UPROPERTY(EditAnywhere)
    TArray<UUWEStoryGoal*> WorldStoryGoalsToUnlockOnBuildComplete;
    
private:
    UPROPERTY(SaveGame, ReplicatedUsing=OnRep_ConstructionState)
    ESN2WorldBuilderProjectState ConstructionState;
    
    UPROPERTY(SaveGame)
    FGuid GhostGUID;
    
public:
    ASN2WorldBuilderProject(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void OnRequiredBioScanCompleted(UUWEStoryGoal* UnlockedStoryGoal, AActor* ReceivingActor);
    
    UFUNCTION()
    void OnRep_ConstructionState();
    
    UFUNCTION()
    void OnBuilderConstructionCompleted(bool bWasConstructed);
    
};

