#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UWEAttachedActor.generated.h"

class UUWEPawnAttachmentOwner;

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class UWEPAWNATTACHMENT_API UUWEAttachedActor : public UInterface {
    GENERATED_BODY()
};

class UWEPAWNATTACHMENT_API IUWEAttachedActor : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual bool IsAttached() PURE_VIRTUAL(IsAttached, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool InitiateDetachmentIfAttached(bool FastForward) PURE_VIRTUAL(InitiateDetachmentIfAttached, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual UUWEPawnAttachmentOwner* GetAttachedTo() PURE_VIRTUAL(GetAttachedTo, return NULL;);
    
};

