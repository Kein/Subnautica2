#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "Interactable.h"
#include "UWEPawnAttachmentInteractableTrigger.generated.h"

class UBoxComponent;

UCLASS()
class UWEPAWNATTACHMENT_API AUWEPawnAttachmentInteractableTrigger : public AActor, public IInteractable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UBoxComponent* InteractCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString InfoPrimaryText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag InteractionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InteractionDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName PawnAttachmentSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableClientLocalPrediction;
    
public:
    AUWEPawnAttachmentInteractableTrigger(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

