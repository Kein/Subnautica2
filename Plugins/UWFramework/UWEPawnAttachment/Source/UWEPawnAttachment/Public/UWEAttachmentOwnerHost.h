#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UWEAttachmentOwnerHost.generated.h"

class AActor;

UINTERFACE(Blueprintable)
class UWEPAWNATTACHMENT_API UUWEAttachmentOwnerHost : public UInterface {
    GENERATED_BODY()
};

class UWEPAWNATTACHMENT_API IUWEAttachmentOwnerHost : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintNativeEvent)
    bool CanAttach(AActor* Attachment, const FName& SlotName);
    
};

