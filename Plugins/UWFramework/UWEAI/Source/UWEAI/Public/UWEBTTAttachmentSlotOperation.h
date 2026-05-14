#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "EUWEBTTAttachmentSlotOperation_DetachmentSource.h"
#include "EUWEBTTAttachmentSlotOperation_Type.h"
#include "UWEAITargetActorSelector.h"
#include "UWEBTTAttachmentSlotOperation.generated.h"

UCLASS(BlueprintType)
class UWEAI_API UUWEBTTAttachmentSlotOperation : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EUWEBTTAttachmentSlotOperation_Type OperationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool UsePawnAttachmentData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EUWEBTTAttachmentSlotOperation_DetachmentSource DetachmentSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FUWEAITargetActorSelector AttachmentOwnerSelector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName AttachmentOwnerSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FUWEAITargetActorSelector AttachedPawnSelector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool SucceedIfOperationIsAlreadyDone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool FastForward;
    
    UUWEBTTAttachmentSlotOperation();

};

