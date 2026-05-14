#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UWESaveObject.h"
#include "UWEBiomodCrafterComponent.generated.h"

class UUWEBiomodCrafterInteractionComponent;
class UUWESaveHandle;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEBIOMODS_API UUWEBiomodCrafterComponent : public UActorComponent, public IUWESaveObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 SlotCount;
    
    UPROPERTY(BlueprintReadOnly, Instanced, Replicated)
    UUWEBiomodCrafterInteractionComponent* CurrentInteractor;
    
    UPROPERTY()
    UUWESaveHandle* SaveHandle;
    
public:
    UUWEBiomodCrafterComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


    // Fix for true pure virtual functions not being implemented
};

