#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "Engine/EngineTypes.h"
#include "UWEAITargetActorSelector.h"
#include "WEBTDFindAttachmentSlot.generated.h"

UCLASS(BlueprintType)
class UWEAI_API UWEBTDFindAttachmentSlot : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool GetAttachmentOwnerFromPerceivedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FUWEAITargetActorSelector AttachmentOwnerSelector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FUWEAITargetActorSelector AttachedPawnSelector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBlackboardKeySelector AttachmentSlotLocationKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool DoVisibilityTest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ECollisionChannel> VisibilityTraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool AutoDetachByLeavingNode;
    
    UWEBTDFindAttachmentSlot();

};

