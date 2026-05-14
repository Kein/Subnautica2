#pragma once
#include "CoreMinimal.h"
#include "Engine/HitResult.h"
#include "Components/StaticMeshComponent.h"
#include "GameplayTagContainer.h"
#include "Interactable.h"
#include "UWEInteractableStaticMesh.generated.h"

class AController;
class APawn;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEINTERACT_API UUWEInteractableStaticMesh : public UStaticMeshComponent, public IInteractable {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FInteractDelegate, AController*, Controller, APawn*, Pawn, const FHitResult&, HitResult);
    
    UPROPERTY(BlueprintAssignable)
    FInteractDelegate OnInteract;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    FString InteractionText;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag InteractionTypeTag;
    
public:
    UUWEInteractableStaticMesh(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

