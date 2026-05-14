#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "AbilitySystemInterface.h"
#include "UWEGameplayPawn.generated.h"

class UUWEAbilitySystemComponent;

UCLASS()
class UWEGAMEPLAY_API AUWEGameplayPawn : public APawn, public IAbilitySystemInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UUWEAbilitySystemComponent* UWEAbilitySystemComponent;
    
    AUWEGameplayPawn(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    UUWEAbilitySystemComponent* GetASC() const;
    

    virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override {  return NULL; };
};

