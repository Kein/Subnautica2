#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "GameplayTagContainer.h"
#include "Interactable.h"
#include "UWEAttachmentOwnerInteractableBoxComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEPAWNATTACHMENT_API UUWEAttachmentOwnerInteractableBoxComponent : public UBoxComponent, public IInteractable {
    GENERATED_BODY()
public:
protected:
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
    UUWEAttachmentOwnerInteractableBoxComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

