#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AbilitySystemInterface.h"
#include "UWEGameplayActor.generated.h"

class UUWEAbilitySystemComponent;
class UUWEAbilitySystemData;

UCLASS()
class UWEGAMEPLAY_API AUWEGameplayActor : public AActor, public IAbilitySystemInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWEAbilitySystemData* AbilitySystemData;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UUWEAbilitySystemComponent* UWEAbilitySystemComponent;
    
    AUWEGameplayActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    UUWEAbilitySystemComponent* GetASC() const;
    

    virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override {  return NULL; };
};

