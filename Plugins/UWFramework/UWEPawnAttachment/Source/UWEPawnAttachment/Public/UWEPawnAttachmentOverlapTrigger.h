#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "UWEPawnAttachmentOverlapTrigger.generated.h"

class USphereComponent;

UCLASS()
class UWEPAWNATTACHMENT_API AUWEPawnAttachmentOverlapTrigger : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TEnumAsByte<ECollisionChannel> OverlapCollisionChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName PawnAttachmentSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableClientLocalPrediction;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    USphereComponent* Trigger;
    
public:
    AUWEPawnAttachmentOverlapTrigger(const FObjectInitializer& ObjectInitializer);

};

