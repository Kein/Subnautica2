#pragma once
#include "CoreMinimal.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "UWEAttachmentReplicationState.h"
#include "UWEAttachmentReplicationStateArray.generated.h"

class UUWEPawnAttachmentOwner;

USTRUCT(BlueprintType)
struct FUWEAttachmentReplicationStateArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FUWEAttachmentReplicationState> Items;
    
private:
    UPROPERTY(Instanced, NotReplicated)
    UUWEPawnAttachmentOwner* Owner;
    
public:
    UWEPAWNATTACHMENT_API FUWEAttachmentReplicationStateArray();
};

