#pragma once
#include "CoreMinimal.h"
#include "GameFramework/DefaultPawn.h"
#include "UWEGameCapturePawn.generated.h"

class AActor;
class APawn;

UCLASS()
class UWEGAMECAPTURE_API AUWEGameCapturePawn : public ADefaultPawn {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(ReplicatedUsing=OnRep_PreviousPawn)
    APawn* PreviousPawn;
    
    UPROPERTY()
    AActor* AttachedObject;
    
public:
    AUWEGameCapturePawn(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void OnRep_PreviousPawn() const;
    
};

