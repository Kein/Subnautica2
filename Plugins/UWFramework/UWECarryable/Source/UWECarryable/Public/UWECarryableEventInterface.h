#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UWECarryableAttachmentInfo.h"
#include "UWECarryableEventInterface.generated.h"

UINTERFACE(Blueprintable)
class UUWECarryableEventInterface : public UInterface {
    GENERATED_BODY()
};

class IUWECarryableEventInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransitionEnd(const FUWECarryableAttachmentInfo& AttachmentInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransitionBegin(const FUWECarryableAttachmentInfo& AttachmentInfo);
    
};

