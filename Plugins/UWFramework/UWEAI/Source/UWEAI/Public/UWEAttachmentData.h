#pragma once
#include "CoreMinimal.h"
#include "UWEAttachmentData.generated.h"

class AActor;
class UUWEPawnAttachmentOwner;

USTRUCT(BlueprintType)
struct FUWEAttachmentData {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UUWEPawnAttachmentOwner* AttachmentOwner;
    
    UPROPERTY()
    AActor* Attachment;
    
    UWEAI_API FUWEAttachmentData();
};

