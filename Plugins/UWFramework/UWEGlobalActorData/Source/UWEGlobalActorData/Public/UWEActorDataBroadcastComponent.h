#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "UWESaveObject.h"
#include "UWEActorDataBroadcastComponent.generated.h"

class AUWEActorDataGroup;
class UUWESaveHandle;

UCLASS(Abstract, BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEGLOBALACTORDATA_API UUWEActorDataBroadcastComponent : public UActorComponent, public IUWESaveObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FGameplayTag DataFieldIdentifier;
    
    UPROPERTY(Replicated, SaveGame)
    bool HasValidValue;
    
    UPROPERTY()
    UUWESaveHandle* SaveHandle;
    
public:
    UUWEActorDataBroadcastComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintPure)
    bool HasOverriddenValue();
    
    UFUNCTION(BlueprintPure)
    FGameplayTag GetFieldIdentifier() const;
    
    UFUNCTION(BlueprintPure)
    AUWEActorDataGroup* GetActorDataGroup() const;
    

    // Fix for true pure virtual functions not being implemented
};

