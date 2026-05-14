#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UWESaveObject.h"
#include "UWESculpturalBaseGlobalsComponent.generated.h"

class UUWESaveHandle;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWESCULPTURALBASE_API UUWESculpturalBaseGlobalsComponent : public UActorComponent, public IUWESaveObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(SaveGame)
    int32 NextPlayerFacingBaseID;
    
    UPROPERTY(Replicated, SaveGame)
    uint64 GlobalCellCount;
    
    UPROPERTY()
    UUWESaveHandle* SaveHandle;
    
public:
    UUWESculpturalBaseGlobalsComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


    // Fix for true pure virtual functions not being implemented
};

