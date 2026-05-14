#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EUWEAttachmentAnimationStage.h"
#include "EUWEAttachmentInterpolateToSocketStage.h"
#include "UWEAttachmentState.generated.h"

class AActor;
class ALevelSequenceActor;

USTRUCT(BlueprintType)
struct UWEPAWNATTACHMENT_API FUWEAttachmentState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* Attachment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    AActor* DetachedAttachment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EUWEAttachmentInterpolateToSocketStage InterpolateToSocketStage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EUWEAttachmentAnimationStage AnimationStage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool AwaitingDetachmentByAnimMontageNotify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector AttachmentPreviousLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Client_NeedsServerConfirmation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    double StateChangeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    double PreviousStateChangeTime;
    
    UPROPERTY(Transient)
    ALevelSequenceActor* LevelSequenceActor;
    
    FUWEAttachmentState();
};

