#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "UWEActorDataGroup.generated.h"

class UUWEADGBroadcastComponent_Bool;
class UUWESaveComponent;

UCLASS()
class UWEGLOBALACTORDATA_API AUWEActorDataGroup : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced, VisibleAnywhere)
    UUWEADGBroadcastComponent_Bool* EnabledBroadcastComponent;
    
private:
    UPROPERTY(EditAnywhere)
    FGameplayTag Identifier;
    
    UPROPERTY(Instanced)
    UUWESaveComponent* SaveComponent;
    
public:
    AUWEActorDataGroup(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    FGameplayTag GetIdentifier() const;
    
    UFUNCTION(BlueprintPure)
    float GetFloatValue(FGameplayTag FieldIdentifier, bool& Valid) const;
    
    UFUNCTION(BlueprintPure)
    bool GetBoolValue(FGameplayTag FieldIdentifier, bool& Valid) const;
    
};

