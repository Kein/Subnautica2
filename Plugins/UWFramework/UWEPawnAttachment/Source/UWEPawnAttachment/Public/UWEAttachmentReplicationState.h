#pragma once
#include "CoreMinimal.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "UWEAttachmentReplicationState.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct UWEPAWNATTACHMENT_API FUWEAttachmentReplicationState : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* Attachment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool FastForward;
    
    FUWEAttachmentReplicationState();
};

