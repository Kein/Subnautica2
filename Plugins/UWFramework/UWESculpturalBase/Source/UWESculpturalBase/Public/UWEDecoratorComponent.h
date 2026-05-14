#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "UWEActorUID.h"
#include "UWESaveObject.h"
#include "UWEDecoratorComponent.generated.h"

class AUWESculpturalBaseActor;
class UUWESaveHandle;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWESCULPTURALBASE_API UUWEDecoratorComponent : public UActorComponent, public IUWESaveObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UUWESaveHandle* SaveHandle;
    
    UPROPERTY(SaveGame, ReplicatedUsing=OnRep_ShowAsGhost)
    bool bShowAsGhost;
    
    UPROPERTY(Replicated)
    FUWEActorUID OwnerUID;
    
    UPROPERTY(Replicated)
    FGuid BaseGUID;
    
    UPROPERTY(Replicated)
    uint32 DecoratorID;
    
    UPROPERTY(Replicated, SaveGame)
    uint32 ReplicationTest;
    
public:
    UUWEDecoratorComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void RegisterDecoratorWithBase(AUWESculpturalBaseActor* base);
    
    UFUNCTION()
    void OnRep_ShowAsGhost();
    

    // Fix for true pure virtual functions not being implemented
};

