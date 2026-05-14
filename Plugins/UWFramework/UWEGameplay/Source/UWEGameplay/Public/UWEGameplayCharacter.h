#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "UWEGameplayCharacter.generated.h"

class UUWEAbilitySystemComponent;

UCLASS()
class UWEGAMEPLAY_API AUWEGameplayCharacter : public ACharacter, public IAbilitySystemInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UUWEAbilitySystemComponent* UWEAbilitySystemComponent;
    
    AUWEGameplayCharacter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    UUWEAbilitySystemComponent* GetASC() const;
    

    virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override {  return NULL; };
};

