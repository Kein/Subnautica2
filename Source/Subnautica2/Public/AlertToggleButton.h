#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "Interactable.h"
#include "AlertToggleButton.generated.h"

class UStaticMeshComponent;
class UTextRenderComponent;

UCLASS()
class SUBNAUTICA2_API AAlertToggleButton : public AActor, public IInteractable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UStaticMeshComponent* ButtonMesh;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UTextRenderComponent* ButtonText;
    
public:
    AAlertToggleButton(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnBlockAlertTagChanged(FGameplayTag GameplayTag, int32 TagCount);
    

    // Fix for true pure virtual functions not being implemented
};

